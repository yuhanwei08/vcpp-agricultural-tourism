#if !defined(AFX_NONGJUDLG_H__BC419D63_C92D_4406_8F41_2217ECAED186__INCLUDED_)
#define AFX_NONGJUDLG_H__BC419D63_C92D_4406_8F41_2217ECAED186__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NongjuDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNongjuDlg dialog

class CNongjuDlg : public CDialog
{
// Construction
public:
	CNongjuDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNongjuDlg)
	enum { IDD = IDD_NJ };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNongjuDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNongjuDlg)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NONGJUDLG_H__BC419D63_C92D_4406_8F41_2217ECAED186__INCLUDED_)
