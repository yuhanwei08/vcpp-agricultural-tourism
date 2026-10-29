#if !defined(AFX_FEIYIDLG_H__296AEDDB_F2FF_4C3F_A920_EF0D26260D12__INCLUDED_)
#define AFX_FEIYIDLG_H__296AEDDB_F2FF_4C3F_A920_EF0D26260D12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FeiyiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFeiyiDlg dialog

class CFeiyiDlg : public CDialog
{
// Construction
public:
	CFeiyiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFeiyiDlg)
	enum { IDD = IDD_FY };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFeiyiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFeiyiDlg)
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FEIYIDLG_H__296AEDDB_F2FF_4C3F_A920_EF0D26260D12__INCLUDED_)
