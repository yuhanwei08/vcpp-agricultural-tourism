#if !defined(AFX_ZHUBIANDLG_H__28744631_F0BA_4D56_B97D_BFC11821DBF5__INCLUDED_)
#define AFX_ZHUBIANDLG_H__28744631_F0BA_4D56_B97D_BFC11821DBF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ZhubianDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZhubianDlg dialog

class CZhubianDlg : public CDialog
{
// Construction
public:
	CZhubianDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZhubianDlg)
	enum { IDD = IDD_ZB };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZhubianDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZhubianDlg)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHUBIANDLG_H__28744631_F0BA_4D56_B97D_BFC11821DBF5__INCLUDED_)
