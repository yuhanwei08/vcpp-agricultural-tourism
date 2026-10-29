// FeiyiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "FeiyiDlg.h"
#include "ZhubianDlg.h"
#include "NongjuDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFeiyiDlg dialog


CFeiyiDlg::CFeiyiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFeiyiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFeiyiDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CFeiyiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFeiyiDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFeiyiDlg, CDialog)
	//{{AFX_MSG_MAP(CFeiyiDlg)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFeiyiDlg message handlers

void CFeiyiDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CZhubianDlg dlg;
    if (IDOK!=dlg.DoModal()) return ;
}

void CFeiyiDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CNongjuDlg dlg;
    if (IDOK!=dlg.DoModal()) return ;
}

void CFeiyiDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting	
	CRect   rect;   
        GetClientRect(&rect);                                
        CDC   dcBmp;                                           
        dcBmp.CreateCompatibleDC(&dc);                         
        CBitmap   bmpBackground;   
        bmpBackground.LoadBitmap(IDB_BITMAP12);                 
        BITMAP   m_bitmap; 
        bmpBackground.GetBitmap(&m_bitmap); 
        CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
        dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
        m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
	
	// Do not call CDialog::OnPaint() for painting messages
}
