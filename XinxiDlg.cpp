// XinxiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "XinxiDlg.h"
#include "LuruDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXinxiDlg dialog


CXinxiDlg::CXinxiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CXinxiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CXinxiDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CXinxiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CXinxiDlg)
	DDX_Control(pDX, IDC_LIST2, m_ListCtrl);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CXinxiDlg, CDialog)
	//{{AFX_MSG_MAP(CXinxiDlg)
	ON_BN_CLICKED(IDC_BUTTON_WORKER, OnButtonWorker)
	ON_BN_CLICKED(IDC_BUTTON_CHANGE, OnButtonChange)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST2, OnItemchangedList2)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, OnButtonDelete)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXinxiDlg message handlers

BOOL CXinxiDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CString strHeader[4]={ "Name", "Gender", "Staff ID", "Salary"};
	for (int nCol=0; nCol<4; nCol++)
		m_ListCtrl.InsertColumn(nCol,strHeader[nCol],LVCFMT_LEFT,80);
	GetDlgItem( IDC_BUTTON_CHANGE )->EnableWindow(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CXinxiDlg::OnButtonWorker() 
{
	// TODO: Add your control notification handler code here
	CLuruDlg dlg;
	if (IDOK != dlg.DoModal()) return;
	int nItem = m_ListCtrl.GetItemCount();
	m_ListCtrl.InsertItem( nItem, dlg.m_strname );
	m_ListCtrl.SetItemText( nItem, 1, dlg.m_strsex );
	CString str;
	str.Format("%10.1f", dlg.m_num );
	m_ListCtrl.SetItemText( nItem, 2, str );
	str.Format("%10.1f", dlg.m_wage );
	m_ListCtrl.SetItemText( nItem, 3, str );	
}

void CXinxiDlg::OnButtonChange() 
{
	POSITION pos;
	pos = m_ListCtrl.GetFirstSelectedItemPosition();
	if (pos == NULL)
	{
		MessageBox("Please select a list item.");
		return;
	}
	int nItem = m_ListCtrl.GetNextSelectedItem( pos );
	CLuruDlg dlg;
	dlg.m_strOKText = "Edit";
	dlg.m_strname = m_ListCtrl.GetItemText( nItem, 0 );
	dlg.m_strsex = m_ListCtrl.GetItemText( nItem, 1 );
	CString str = m_ListCtrl.GetItemText( nItem, 2 );
	dlg.m_num = (float)atof( str );
	str = m_ListCtrl.GetItemText( nItem, 3 );
	dlg.m_wage = (float)atof( str );

	if (IDOK != dlg.DoModal()) return;
	m_ListCtrl.SetItemText( nItem, 0, dlg.m_strname );
	m_ListCtrl.SetItemText( nItem, 1, dlg.m_strsex );
	str.Format("%10.1f", dlg.m_num );
	m_ListCtrl.SetItemText( nItem, 2, str );
	str.Format("%10.1f", dlg.m_wage );
	m_ListCtrl.SetItemText( nItem, 3, str );	
}

void CXinxiDlg::OnItemchangedList2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	NM_LISTVIEW* pNMListView = (NM_LISTVIEW*)pNMHDR;
	GetDlgItem( IDC_BUTTON_CHANGE )->EnableWindow(TRUE);
	*pResult = 0;
}

void CXinxiDlg::OnButtonDelete() 
{
	POSITION pos;
	pos = m_ListCtrl.GetFirstSelectedItemPosition();
	CString str;

	if (pos == NULL)
	{
		MessageBox("Please select a list item.");
		return;
	}
	str.Format("Delete the selected record?");
	if (IDOK != MessageBox(str, "Confirm Deletion", MB_ICONQUESTION | MB_OKCANCEL))
		return;
	int nItem = m_ListCtrl.GetSelectionMark();
	m_ListCtrl.DeleteItem(nItem);

}

void CXinxiDlg::OnPaint() 
{

	// TODO: Add your message handler code here
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
	// Do not call CDialog::OnPaint() for painting messages
}
