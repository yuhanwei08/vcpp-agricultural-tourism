#if !defined(AFX_YYXXDLG_H__D2048B47_8D74_43B1_B1DC_86B92F034E74__INCLUDED_)
#define AFX_YYXXDLG_H__D2048B47_8D74_43B1_B1DC_86B92F034E74__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YyxxDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CYyxxDlg dialog

class CYyxxDlg : public CDialog
{
// Construction
public:
	CYyxxDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CYyxxDlg)
	enum { IDD = IDD_YYXX };
	CComboBox	m_comboTime;
	CString	m_strtime;
	CString	m_strdate;
	CString	m_strname;
	CString	m_strnum;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYyxxDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CYyxxDlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YYXXDLG_H__D2048B47_8D74_43B1_B1DC_86B92F034E74__INCLUDED_)
