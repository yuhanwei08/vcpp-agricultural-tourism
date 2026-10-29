// NgDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "NgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNgDlg dialog


CNgDlg::CNgDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNgDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNgDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNgDlg)
	DDX_Control(pDX, IDC_OCX1, m_player);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNgDlg, CDialog)
	//{{AFX_MSG_MAP(CNgDlg)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNgDlg message handlers

void CNgDlg::OnPaint() 
{

	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	CRect   rect;   
    GetClientRect(&rect);                                
    CDC   dcBmp;                                           
    dcBmp.CreateCompatibleDC(&dc);                         
    CBitmap   bmpBackground;   
    bmpBackground.LoadBitmap(IDB_BITMAP8);                 
    BITMAP   m_bitmap; 
    bmpBackground.GetBitmap(&m_bitmap); 
    CBitmap   *pbmpOld=dcBmp.SelectObject(&bmpBackground); 
    dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcBmp,0,0,m_bitmap.bmWidth,m_bitmap.bmHeight,SRCCOPY); 

}


void CNgDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
		char  szFileFilter[]="Mp3  File(*.mp3)|*.mp3|"
              "Wma   File(*.wma)|*.wma|"
              "Video   File(*.dat)|*.dat|"
              "Wave   File(*.wav)|*.wav|"
              "AVI   File(*.avi)|*.avi|"
              "Movie   File(*.mov)|*.mov|"
              "Media   File(*.mmm)|*.mmm|"
              "Mid   File(*.mid;*,rmi)|*.mid;*.rmi|"
              "MPEG   File(*.mpeg)|*.mpeg|"
              "All   File(*.*)|*.*|| ";
       CFileDialog  dlg(TRUE,NULL,NULL,OFN_HIDEREADONLY,szFileFilter);
       if(dlg.DoModal()==IDOK)
 
       {
              CString   PathName=dlg.GetPathName();
              PathName.MakeUpper();
              m_player.SetUrl(PathName);
       }
	CDialog::OnCancel();
}
