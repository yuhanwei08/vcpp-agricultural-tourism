#if !defined(AFX_SECONDDLG_H__93AFDEA6_92C3_4F05_9AAE_0D25E015D40B__INCLUDED_)
#define AFX_SECONDDLG_H__93AFDEA6_92C3_4F05_9AAE_0D25E015D40B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SecondDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSecondDlg dialog

class CSecondDlg : public CDialog
{
// Construction
public:
	CSecondDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSecondDlg)
	enum { IDD = IDD_GUANLI };
	CButton	m_passwordCheck;
	CComboBox	m_comboUser;
	CString	m_strUserName;
	CString	m_strPassWord;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSecondDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSecondDlg)
	virtual void OnOK();
	afx_msg void OnPaint();
	afx_msg void OnCheck2();
	afx_msg void OnSelchangeCombo1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SECONDDLG_H__93AFDEA6_92C3_4F05_9AAE_0D25E015D40B__INCLUDED_)
