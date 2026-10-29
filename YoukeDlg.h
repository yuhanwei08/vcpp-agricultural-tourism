#if !defined(AFX_YOUKEDLG_H__34BA1899_47C8_497B_AF3F_DBF606440777__INCLUDED_)
#define AFX_YOUKEDLG_H__34BA1899_47C8_497B_AF3F_DBF606440777__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YoukeDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CYoukeDlg dialog

class CYoukeDlg : public CDialog
{
// Construction
public:
	CYoukeDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CYoukeDlg)
	enum { IDD = IDD_YOUKE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYoukeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CYoukeDlg)
	afx_msg void OnButton1();
	afx_msg void OnPaint();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YOUKEDLG_H__34BA1899_47C8_497B_AF3F_DBF606440777__INCLUDED_)
