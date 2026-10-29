#if !defined(AFX_ZHUCEDLG_H__D06A0B21_DF41_4BA1_A5CA_F19C2A3DFF9D__INCLUDED_)
#define AFX_ZHUCEDLG_H__D06A0B21_DF41_4BA1_A5CA_F19C2A3DFF9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ZhuceDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZhuceDlg dialog

class CZhuceDlg : public CDialog
{
// Construction
public:
	CString strOKText;
	CZhuceDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZhuceDlg)
	enum { IDD = IDD_ZHUCE };
	CString	m_strusername;
	CString	m_strpassword;
	CString	m_strphone;
	CString	m_fid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZhuceDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZhuceDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHUCEDLG_H__D06A0B21_DF41_4BA1_A5CA_F19C2A3DFF9D__INCLUDED_)
