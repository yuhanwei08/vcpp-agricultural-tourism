// NongjuDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "NongjuDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNongjuDlg dialog


CNongjuDlg::CNongjuDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNongjuDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNongjuDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNongjuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNongjuDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNongjuDlg, CDialog)
	//{{AFX_MSG_MAP(CNongjuDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNongjuDlg message handlers

void CNongjuDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                         
	dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP14);                 
    BITMAP   m_bitmap; 
	bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
	
}
