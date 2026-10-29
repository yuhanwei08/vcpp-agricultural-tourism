#if !defined(AFX_XINXIDLG_H__D583952E_8DFB_4D14_BC1C_9CC978C52F12__INCLUDED_)
#define AFX_XINXIDLG_H__D583952E_8DFB_4D14_BC1C_9CC978C52F12__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// XinxiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CXinxiDlg dialog

class CXinxiDlg : public CDialog
{
// Construction
public:
	CXinxiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CXinxiDlg)
	enum { IDD = IDD_XINXI };
	CListCtrl	m_ListCtrl;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXinxiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CXinxiDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonWorker();
	afx_msg void OnButtonChange();
	afx_msg void OnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButtonDelete();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XINXIDLG_H__D583952E_8DFB_4D14_BC1C_9CC978C52F12__INCLUDED_)
