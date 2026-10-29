#if !defined(AFX_LURUDLG_H__58936122_16CF_41F6_A9A5_E677E601F612__INCLUDED_)
#define AFX_LURUDLG_H__58936122_16CF_41F6_A9A5_E677E601F612__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LuruDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLuruDlg dialog

class CLuruDlg : public CDialog
{
// Construction
public:
	CString m_strOKText;
	CLuruDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLuruDlg)
	enum { IDD = IDD_LURU };
	float	m_wage;
	CString	m_strname;
	float	m_num;
	CString	m_strsex;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLuruDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLuruDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LURUDLG_H__58936122_16CF_41F6_A9A5_E677E601F612__INCLUDED_)
