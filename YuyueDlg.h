#if !defined(AFX_YUYUEDLG_H__31534DE5_C58C_4110_80B2_F18E763EF6F3__INCLUDED_)
#define AFX_YUYUEDLG_H__31534DE5_C58C_4110_80B2_F18E763EF6F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YuyueDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CYuyueDlg dialog

class CYuyueDlg : public CDialog
{
// Construction
public:
	CYuyueDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CYuyueDlg)
	enum { IDD = IDD_YUYUE };
	CListBox	m_List;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYuyueDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CYuyueDlg)
	afx_msg void OnButtonYuyue();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YUYUEDLG_H__31534DE5_C58C_4110_80B2_F18E763EF6F3__INCLUDED_)
