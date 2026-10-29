// ProgressDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "ProgressDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProgressDlg dialog


CProgressDlg::CProgressDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProgressDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProgressDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CProgressDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProgressDlg)
	DDX_Control(pDX, IDC_PROGRESS1, m_progress);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProgressDlg, CDialog)
	//{{AFX_MSG_MAP(CProgressDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProgressDlg message handlers

BOOL CProgressDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_progress.SetRange(0,100);
    m_progress.SetStep(10);
	CenterWindow();
	return TRUE;  
}

void CProgressDlg::OnPaint() 
{
	CPaintDC dc(this);
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP9);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
    m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
}
