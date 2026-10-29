// project.h : main header file for the PROJECT application
//

#if !defined(AFX_PROJECT_H__098A7D1B_13C6_445B_92E4_B4AB2F8C8F7D__INCLUDED_)
#define AFX_PROJECT_H__098A7D1B_13C6_445B_92E4_B4AB2F8C8F7D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CProjectApp:
// See project.cpp for the implementation of this class
//

class CProjectApp : public CWinApp
{
public:
	CProjectApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CProjectApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECT_H__098A7D1B_13C6_445B_92E4_B4AB2F8C8F7D__INCLUDED_)
