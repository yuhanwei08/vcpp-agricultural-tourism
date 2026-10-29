// YyxxDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "YyxxDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYyxxDlg dialog


CYyxxDlg::CYyxxDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYyxxDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CYyxxDlg)
	m_strtime = _T("");
	m_strdate = _T("");
	m_strname = _T("");
	m_strnum = _T("");
	//}}AFX_DATA_INIT
}


void CYyxxDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CYyxxDlg)
	DDX_Control(pDX, IDC_COMBO1, m_comboTime);
	DDX_CBString(pDX, IDC_COMBO1, m_strtime);
	DDX_Text(pDX, IDC_EDIT_DATE, m_strdate);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strname);
	DDX_Text(pDX, IDC_EDIT_NUM, m_strnum);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CYyxxDlg, CDialog)
	//{{AFX_MSG_MAP(CYyxxDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYyxxDlg message handlers

BOOL CYyxxDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_strtime = "8:30 -- 11:30";
	UpdateData(FALSE);
	return TRUE;  
}

void CYyxxDlg::OnOK() 
{
	UpdateData();
	m_strname.TrimLeft();
	if (m_strname.IsEmpty())
	{
		MessageBox("Please enter a name.");
		return;
	}
	m_strdate.TrimLeft();
	if (m_strdate.IsEmpty())
	{
		MessageBox("Please enter a visit date.");
		return;
	}
	CDialog::OnOK();
}



void CYyxxDlg::OnPaint() 
{
	CPaintDC dc(this); 
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP2);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
    m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
}
