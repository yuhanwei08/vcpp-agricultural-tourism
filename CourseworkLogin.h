// Demo database login used by the English coursework edition.
#pragma once
#include "NewSet.h"
inline BOOL CheckCourseworkLogin(CString username, const CString& password)
{
    username.Replace("'", "''");
    CNewSet records;
    records.m_strFilter.Format("username = '%s'", (LPCTSTR)username);
    BOOL matched = FALSE;
    try {
        records.Open();
        while (!records.IsEOF()) {
            if (records.m_password == password) { matched = TRUE; break; }
            records.MoveNext();
        }
        records.Close();
    }
    catch (CDBException* error) {
        if (records.IsOpen()) records.Close();
        error->Delete();
        AfxMessageBox("Cannot open the demo database. See README.md for setup.");
        return FALSE;
    }
    return matched;
}
