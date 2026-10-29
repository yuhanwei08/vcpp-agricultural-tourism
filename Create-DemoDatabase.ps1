# Run in 32-bit Windows PowerShell. Creates invented demo data only.
param([string]$OutputDirectory = $PSScriptRoot)
$ErrorActionPreference = "Stop"
if ([IntPtr]::Size -ne 4) { throw "Use 32-bit Windows PowerShell (SysWOW64), as described in README.md." }
$folder = [IO.Path]::GetFullPath($OutputDirectory)
if (!(Test-Path -LiteralPath $folder)) { throw "Output directory does not exist." }
$dbPath = Join-Path $folder "zhuce1.mdb"
if (Test-Path -LiteralPath $dbPath) { throw "Database already exists. No file has been overwritten." }
$catalog = New-Object -ComObject ADOX.Catalog
$connectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=$dbPath;Jet OLEDB:Engine Type=5;"
$catalog.Create($connectionString)
$connection = $catalog.ActiveConnection
$null = $connection.Execute("CREATE TABLE [Users] ([username] VARCHAR(16), [password] VARCHAR(16), [id] VARCHAR(16), [phone] VARCHAR(16))")
$null = $connection.Execute("INSERT INTO [Users] VALUES ('admin', '123', 'DEMO-ADMIN', '0000000000')")
$null = $connection.Execute("INSERT INTO [Users] VALUES ('teacher', 'teacher', 'DEMO-VISITOR', '0000000000')")
$connection.Close()
Write-Host "Created demo database: $dbPath"
Write-Host "Place this MDB beside project.exe before running."
