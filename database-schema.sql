CREATE TABLE [Users] (
  [username] VARCHAR(16),
  [password] VARCHAR(16),
  [id] VARCHAR(16),
  [phone] VARCHAR(16)
);
-- Demo data only; use one INSERT per execution in Access.
INSERT INTO [Users] VALUES ('admin', '123', 'DEMO-ADMIN', '0000000000');
INSERT INTO [Users] VALUES ('teacher', 'teacher', 'DEMO-VISITOR', '0000000000');
