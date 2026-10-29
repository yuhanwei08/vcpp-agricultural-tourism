// SecondDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "SecondDlg.h"
#include "XinxiDlg.h"
#include "NewSet.h"
#include "CourseworkLogin.h"
#include "LoginDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSecondDlg dialog


CSecondDlg::CSecondDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSecondDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSecondDlg)
	m_strUserName = _T("");
	m_strPassWord = _T("");
	//}}AFX_DATA_INIT
}


void CSecondDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSecondDlg)
	DDX_Control(pDX, IDC_CHECK2, m_passwordCheck);
	DDX_Control(pDX, IDC_COMBO1, m_comboUser);
	DDX_CBString(pDX, IDC_COMBO1, m_strUserName);
	DDX_Text(pDX, IDC_EDIT2, m_strPassWord);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSecondDlg, CDialog)
	//{{AFX_MSG_MAP(CSecondDlg)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_CBN_SELCHANGE(IDC_COMBO1, OnSelchangeCombo1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSecondDlg message handlers

void CSecondDlg::OnOK()
{
    if (!UpdateData(TRUE)) return;
    m_strUserName.TrimLeft();
    m_strUserName.TrimRight();
    if (m_strUserName.IsEmpty() || m_strPassWord.IsEmpty()) {
        MessageBox("Please enter a username and password.", "Warning", MB_OK);
        return;
    }
    if (m_strUserName != "admin") {
        MessageBox("Please use the administrator account.", "Warning", MB_OK);
        return;
    }
    if (!CheckCourseworkLogin(m_strUserName, m_strPassWord)) {
        MessageBox("Incorrect username or password.", "Warning", MB_OK);
        return;
    }
    UserLogin = 1;
    Tey = 1;
    CXinxiDlg dlg;
    if (dlg.DoModal() == IDOK) CDialog::OnOK();
}

void CSecondDlg::OnPaint() 
{
	CPaintDC dc(this);
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP6);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
    m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
}


void CSecondDlg::OnCheck2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_passwordCheck.GetCheck() == 1) 
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


CString str;
void CSecondDlg::OnSelchangeCombo1() 
{
	UpdateData();
	m_comboUser.GetLBText(m_comboUser.GetCurSel(),str);	
	UpdateData();
	if(str=="teacher")		
	{		
	m_strPassWord="teacher";
	UpdateData(false);
	}
	else if(str=="admin")
	{
		m_strPassWord="123";
		UpdateData(false);
	}
}
