// ZhubianDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "ZhubianDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZhubianDlg dialog


CZhubianDlg::CZhubianDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CZhubianDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZhubianDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CZhubianDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZhubianDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZhubianDlg, CDialog)
	//{{AFX_MSG_MAP(CZhubianDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZhubianDlg message handlers

void CZhubianDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting	
	// TODO: Add your message handler code here
	CRect   rect;   
        GetClientRect(&rect);                                
        CDC   dcBmp;                                           
        dcBmp.CreateCompatibleDC(&dc);                         
        CBitmap   bmpBackground;   
        bmpBackground.LoadBitmap(IDB_BITMAP13);                 
        BITMAP   m_bitmap; 
        bmpBackground.GetBitmap(&m_bitmap); 
        CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
        dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
        m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
	
	// Do not call CDialog::OnPaint() for painting messages

}
