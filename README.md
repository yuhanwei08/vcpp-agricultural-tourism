# Agricultural Tourism and Cultural Visit System

Visual C++ Programming team coursework, Nanjing Agricultural University.
November-December 2023. Team: Yuhan Wei and Ziyue Ouyang.

## English source edition

This repository contains the original MFC coursework source with an English
application interface. Dialog labels, menus, help/status strings, messages and
cultural descriptions have been translated. Some descriptive prose is shortened
to fit the original dialogs. Resource filenames now use ASCII names. Database
table and DSN names are both `Users`. The original Chinese database is incompatible
with this edition: create a new demo database as described below.

The two login handlers now check fields before querying and store the match before
moving through the recordset. They no longer read a password field after EOF or
open the visitor dialog twice. These edits have only been statically inspected.
Generated Windows Media Player wrappers are retained as dependencies, not claimed
as original algorithms. Historical comments may remain Chinese.

## Important build status

This is an English source edition, not a verified runnable release. It has not
been compiled or run on Windows. Dialog text clipping, MFC compatibility, database
setup and multimedia playback need testing on the original Windows computer.
The supplied website images are translated historical screenshots, not captures
from a tested build of this edition. Windows-owned common dialogs depend on the
operating-system language.

## Build

1. Use a Windows/MFC toolchain compatible with the original Developer Studio 6.00
   `.dsp` / `.dsw` format. Open `project.dsw`, select Win32 Debug, then build.
2. Modern Visual Studio conversion has not been tested. Do not assume the legacy
   workspace opens unchanged in a current IDE. Use the original build computer if
   available. Retain all `.cpp`, `.h`, `.rc`, `resource.h` and the complete `res/`.
3. The original build uses a Win32 x86 MFC application and Windows Media Player
   ActiveX. Access ODBC and Jet/ADO components must also be 32-bit.

## Create a clean demo database

Original databases and personal records are excluded. `database-schema.sql` is
documentation, not a database file. To create a demo MDB on a compatible Windows
machine, open **32-bit Windows PowerShell** (on 64-bit Windows this is
`C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe`).
Change to this source directory and run:

```powershell
.\Create-DemoDatabase.ps1
```

The script requires the 32-bit Jet OLE DB provider and ADOX. It refuses to replace
an existing MDB. Follow your computer's script policy if script execution is
restricted. If those COM components are unavailable, use Microsoft Access to create
`zhuce1.mdb` and execute the CREATE TABLE and INSERT statements separately.

Copy `zhuce1.mdb` beside the built `project.exe` (normally `Debug/`). At startup
the app attempts to register the `Users` DSN using `Microsoft Access Driver (*.mdb)`.
The driver must already be installed. The code does not install it.

Demo administrator: `admin` / `123`. Demo visitor: `teacher` / `teacher`.
These are deliberately public coursework credentials. Passwords are plain text
in this historical prototype. Do not use real account credentials or personal data.

## Features and scope

Visitor login/registration, cultural browsing, images, audio, optional local video
and a reservation-entry display. Administrator user-record management is linked
to Access; the staff-information dialog and booking display are in-memory lists,
not evidence of persistent staff or booking storage. The optional original video
is omitted; choose a suitable local file in the media dialog. Build output, IDE
caches and original databases are omitted.

## Contributions

Yuhan Wei: shared requirements/design documentation, code integration,
administrator login/password matching, loading progress, startup audio and stop,
ODBC configuration and picture controls.

Ziyue Ouyang: shared documentation, record add/delete/edit functions, interface
styling, video playback and password visibility, as recorded in the design report.
English localisation and the small login corrections were prepared later with AI
assistance and are separate from the original coursework contributions.

## Before claiming that the English app runs

Build on Windows, create the clean MDB, then check administrator and visitor login,
invalid/empty login, registration, record editing, booking entry, every culture
dialog, loading progress, audio and media selection. Capture fresh English screens
after those checks. GitHub Pages cannot run this Windows application.

Original third-party media retain their existing ownership. No new licence is
granted over them.
