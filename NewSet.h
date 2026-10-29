#if !defined(AFX_NEWSET_H__7022A460_E507_4910_9DF1_5C08D9A1BCC5__INCLUDED_)
#define AFX_NEWSET_H__7022A460_E507_4910_9DF1_5C08D9A1BCC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewSet recordset

class CNewSet : public CRecordset
{
public:
	CNewSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CNewSet)

// Field/Param Data
	//{{AFX_FIELD(CNewSet, CRecordset)
	CString	m_username;
	CString	m_password;
	CString	m_id;
	CString	m_phone;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewSet)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWSET_H__7022A460_E507_4910_9DF1_5C08D9A1BCC5__INCLUDED_)
