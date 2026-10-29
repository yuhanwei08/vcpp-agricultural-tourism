// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "LoginDlg.h"
#include "ZhuceDlg.h"
#include "YoukeDlg.h"
#include "NewSet.h"
#include "CourseworkLogin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg dialog


CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginDlg)
	m_mima = _T("");
	m_yonghuming = _T("");
	//}}AFX_DATA_INIT
}


void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginDlg)
	DDX_Control(pDX, IDC_CHECK1, m_mimaCheck);
	DDX_Control(pDX, IDC_COMBO1, m_stryonghuming);
	DDX_Text(pDX, IDC_EDIT2, m_mima);
	DDX_CBString(pDX, IDC_COMBO1, m_yonghuming);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginDlg message handlers

void CLoginDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CZhuceDlg  dlg;
	if (IDOK!=dlg.DoModal()) return ;
	CNewSet sSet; 
    sSet.Open();
    sSet.AddNew();
	sSet.m_username		= dlg.m_strusername;
	sSet.m_password	    = dlg.m_strpassword;
	sSet.m_id		    = dlg.m_fid;
	sSet.m_phone		= dlg.m_strphone;
	sSet.Update();
    sSet.Requery();
    sSet.Close();
	CDialog::OnOK();
}

void CLoginDlg::OnOK()
{
    if (!UpdateData(TRUE)) return;
    m_yonghuming.TrimLeft();
    m_yonghuming.TrimRight();
    if (m_yonghuming.IsEmpty() || m_mima.IsEmpty()) {
        MessageBox("Please enter a username and password.", "Warning", MB_OK);
        return;
    }
    if (!CheckCourseworkLogin(m_yonghuming, m_mima)) {
        MessageBox("Incorrect username or password.", "Warning", MB_OK);
        return;
    }
    UserLogin = 1;
    Tey = 0;
    CYoukeDlg dlg;
    if (dlg.DoModal() == IDOK) CDialog::OnOK();
}

void CLoginDlg::OnPaint() 
{
	CPaintDC dc(this); 
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP5);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 

}

void CLoginDlg::OnCheck1() 
{
	UpdateData(TRUE); 
	if (m_mimaCheck.GetCheck() == 1) 
	{
		CEdit* pmyEdit = (CEdit*)GetDlgItem(IDC_EDIT2);		 
		pmyEdit->SetPasswordChar(0);						 
		ASSERT(!(pmyEdit->GetStyle() & ES_PASSWORD));  
	}
	else  
	{
	
		CEdit* pmyEdit = (CEdit*)GetDlgItem(IDC_EDIT2);			 
		pmyEdit->SetPasswordChar('*');						 
	}

	CEdit* pmyEdit = (CEdit*)GetDlgItem(IDC_EDIT2);				 
	pmyEdit->SetFocus();
}

