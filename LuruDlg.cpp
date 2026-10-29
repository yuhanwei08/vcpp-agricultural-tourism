// LuruDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "LuruDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLuruDlg dialog


CLuruDlg::CLuruDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLuruDlg::IDD, pParent)
{
	m_strOKText.Empty();
	//{{AFX_DATA_INIT(CLuruDlg)
	m_wage = 0.0f;
	m_strname = _T("");
	m_num = 0.0f;
	m_strsex = _T("");
	//}}AFX_DATA_INIT
}


void CLuruDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLuruDlg)
	DDX_Text(pDX, IDC_EDIT_WAGE, m_wage);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strname);
	DDX_Text(pDX, IDC_EDIT_NUM, m_num);
	DDX_Text(pDX, IDC_EDIT_SEX, m_strsex);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLuruDlg, CDialog)
	//{{AFX_MSG_MAP(CLuruDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLuruDlg message handlers

void CLuruDlg::OnOK() 
{
	UpdateData();
	m_strname.TrimLeft();
	if (m_strname.IsEmpty())	{
		MessageBox("Please enter a name.");		return;
	}
	m_strsex.TrimLeft();
	if (m_strsex.IsEmpty())	{
		MessageBox("Please enter a gender.");		return;
	}
	CDialog::OnOK();
}

BOOL CLuruDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	if (!m_strOKText.IsEmpty())
		GetDlgItem( IDOK )->SetWindowText( m_strOKText );
	return TRUE;
}

void CLuruDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
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
	// Do not call CDialog::OnPaint() for painting messages
}
