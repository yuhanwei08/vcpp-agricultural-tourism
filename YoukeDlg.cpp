// YoukeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "YoukeDlg.h"
#include "YuyueDlg.h"
#include "NgDlg.h"
#include "FeiyiDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYoukeDlg dialog


CYoukeDlg::CYoukeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYoukeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CYoukeDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CYoukeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CYoukeDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CYoukeDlg, CDialog)
	//{{AFX_MSG_MAP(CYoukeDlg)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYoukeDlg message handlers

void CYoukeDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CYuyueDlg dlg;
    if (IDOK!=dlg.DoModal()) return ;
}

void CYoukeDlg::OnPaint() 
{
	CPaintDC dc(this); 
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
	dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP4);                 
    BITMAP   m_bitmap;
	bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground);
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
	// Do not call CDialog::OnPaint() for painting messages
	// TODO: Add your message handler code here
	
	// Do not call CDialog::OnPaint() for painting messages
}

void CYoukeDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CNgDlg dlg;
    if (IDOK!=dlg.DoModal()) return ;
}


void CYoukeDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CFeiyiDlg dlg;
    if (IDOK!=dlg.DoModal()) return ;
}
