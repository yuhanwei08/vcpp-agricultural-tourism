//{{AFX_INCLUDES()
#include "wmpplayer4.h"
//}}AFX_INCLUDES
#if !defined(AFX_NGDLG_H__4802A0AD_469D_4FEC_A3B9_7A08B6F5DDF5__INCLUDED_)
#define AFX_NGDLG_H__4802A0AD_469D_4FEC_A3B9_7A08B6F5DDF5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NgDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNgDlg dialog

class CNgDlg : public CDialog
{
// Construction
public:
	CNgDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNgDlg)
	enum { IDD = IDD_NG };
	CWMPPlayer4	m_player;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNgDlg)
	afx_msg void OnPaint();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NGDLG_H__4802A0AD_469D_4FEC_A3B9_7A08B6F5DDF5__INCLUDED_)
