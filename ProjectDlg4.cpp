// ProjectDlg4.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "ProjectDlg4.h"
#include "SecondDlg.h"
#include "LoginDlg.h"
#include "ProgressDlg.h"
#include "Windows.h"
#include "odbcinst.h"

#include<windows.h>
#include<Mmsystem.h>
#pragma comment(lib,"winmm.lib")


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProjectDlg dialog


CProjectDlg::CProjectDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CProjectDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CProjectDlg)
	//}}AFX_DATA_INIT

}


void CProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProjectDlg)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProjectDlg, CDialog)
	//{{AFX_MSG_MAP(CProjectDlg)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProjectDlg message handlers

void CProjectDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CSecondDlg dlg;
	if (IDOK!=dlg.DoModal()) return ;
	CDialog::OnOK();
}

void CProjectDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	PlaySound( 0 , AfxGetInstanceHandle() , SND_PURGE );
}


void CProjectDlg::OnOK() 
{
	// TODO: Add extra validation here
	CLoginDlg  dlg;
	if (IDOK!=dlg.DoModal()) return ;
	CDialog::OnOK();
}



void CProjectDlg::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	    CRect   rect;   
        GetClientRect(&rect);                                
        CDC   dcBmp;                                           
        dcBmp.CreateCompatibleDC(&dc);                         
        CBitmap   bmpBackground;   
        bmpBackground.LoadBitmap(IDB_BITMAP1);                 
        BITMAP   m_bitmap; 
        bmpBackground.GetBitmap(&m_bitmap); 
        CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
        dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,
        m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 
	// Do not call CDialog::OnPaint() for painting messages
	// TODO: Add your message handler code here
 
}

BOOL CProjectDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	CString szPath; 
	GetModuleFileName(NULL,szPath.GetBufferSetLength(MAX_PATH+1),MAX_PATH); 
	szPath.ReleaseBuffer();
	
	int nPos; 
	nPos=szPath.ReverseFind ('\\');
	szPath=szPath.Left (nPos); 
	CString szFile = szPath + "\\zhuce1.mdb";

	char szAtr[256]; 
	sprintf(szAtr,"DSN=%s!DBQ=%s!DEFAULTDIR=%s!! ","Users", szFile,szPath);
	
	int nlen; 
	nlen = strlen(szAtr); 
	for (int i=0; i<nlen; i++) 
	{
		if (szAtr [i] == '!') 
			szAtr [i] = '\0'; 
	} 

	if (FALSE == SQLConfigDataSource(NULL, ODBC_ADD_DSN, "Microsoft Access Driver (*.mdb)\0",(LPCSTR)szAtr)) 
	AfxMessageBox("SQLConfigDataSource Failed");


	PlaySound( MAKEINTRESOURCE(IDR_WAVE1) , NULL , SND_RESOURCE | SND_ASYNC | SND_LOOP );
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE

	
}

int CProjectDlg::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	CProgressDlg *dlg = new CProgressDlg(this);
	dlg->Create(CProgressDlg::IDD, this);
	dlg->ShowWindow(SW_SHOW);
	dlg->UpdateWindow();
	Sleep(150);
	for(int i=0; i<100/10; i++)
	{
		dlg->m_progress.StepIt();
		Sleep(110);
	}
	Sleep(100);
	dlg->DestroyWindow();
	return 0;
}
