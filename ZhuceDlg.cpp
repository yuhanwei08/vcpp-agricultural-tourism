// ZhuceDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "ZhuceDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZhuceDlg dialog


CZhuceDlg::CZhuceDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CZhuceDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZhuceDlg)
	m_strusername = _T("");
	m_strpassword = _T("");
	m_strphone = _T("");
	m_fid = _T("");
	//}}AFX_DATA_INIT
}


void CZhuceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZhuceDlg)
	DDX_Text(pDX, IDC_EDIT1, m_strusername);
	DDX_Text(pDX, IDC_EDIT2, m_strpassword);
	DDX_Text(pDX, IDC_EDIT4, m_strphone);
	DDX_Text(pDX, IDC_EDIT3, m_fid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZhuceDlg, CDialog)
	//{{AFX_MSG_MAP(CZhuceDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZhuceDlg message handlers

void CZhuceDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	m_strusername.TrimLeft();
	m_strpassword.TrimLeft();
	if (m_strusername.IsEmpty())	{
		MessageBox("Please enter a username.","Warning",MB_ICONEXCLAMATION|MB_OKCANCEL);		
		return;
	}
	
	else if (m_strpassword.IsEmpty())	{
		MessageBox("Please enter a password.","Warning",MB_ICONEXCLAMATION|MB_OKCANCEL);	
		return;
	}
	else  MessageBox("Registration successful.","Notice",MB_OK|MB_ICONINFORMATION);
	CDialog::OnOK();
}


BOOL CZhuceDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	if (!strOKText.IsEmpty())
	GetDlgItem( IDOK )->SetWindowText( strOKText );
	return TRUE;  
}
