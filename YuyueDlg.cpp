// YuyueDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "YuyueDlg.h"
#include "YyxxDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYuyueDlg dialog


CYuyueDlg::CYuyueDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYuyueDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CYuyueDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CYuyueDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CYuyueDlg)
	DDX_Control(pDX, IDC_LIST1, m_List);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CYuyueDlg, CDialog)
	//{{AFX_MSG_MAP(CYuyueDlg)
	ON_BN_CLICKED(IDC_BUTTON_YUYUE, OnButtonYuyue)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYuyueDlg message handlers

void CYuyueDlg::OnButtonYuyue() 
{
	// TODO: Add your control notification handler code here
    CYyxxDlg dlg;
	if (IDOK != dlg.DoModal()) return;
	while(m_List.GetCount()!=0)
		m_List.DeleteString(0);
	m_List.AddString( "Visitor: "+dlg.m_strname);
	m_List.AddString( "Date: "+dlg.m_strdate);
	m_List.AddString( "Time: "+dlg.m_strtime);
	m_List.AddString( "Visitors: "+dlg.m_strnum);
}

void CYuyueDlg::OnPaint() 
{
	CPaintDC dc(this); 
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP3);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
    m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
}
