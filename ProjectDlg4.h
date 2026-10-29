#if !defined(AFX_PROJECTDLG4_H__E179572E_4EB6_4815_AE1B_BD51CD17940C__INCLUDED_)
#define AFX_PROJECTDLG4_H__E179572E_4EB6_4815_AE1B_BD51CD17940C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ProjectDlg4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProjectDlg dialog

class CProjectDlg : public CDialog
{
// Construction
public:
	CBitmapButton m_idok;
	CBitmapButton m_button1;
	CProjectDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CProjectDlg)
	enum { IDD = IDD_PROJECT };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CProjectDlg)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	virtual void OnOK();
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTDLG4_H__E179572E_4EB6_4815_AE1B_BD51CD17940C__INCLUDED_)
