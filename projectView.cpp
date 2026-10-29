// projectView.cpp : implementation of the CProjectView class
//

#include "stdafx.h"
#include "project.h"
#include "ZhuceDlg.h"
#include "NewSet.h"

#include "projectDoc.h"
#include "projectView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProjectView

IMPLEMENT_DYNCREATE(CProjectView, CListView)

BEGIN_MESSAGE_MAP(CProjectView, CListView)
	//{{AFX_MSG_MAP(CProjectView)
	ON_COMMAND(ID_ADD, OnAdd)
	ON_COMMAND(ID_DEL, OnDel)
	ON_COMMAND(ID_CHANGE, OnChange)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CListView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProjectView construction/destruction

CProjectView::CProjectView()
{
	// TODO: add construction code here

}

CProjectView::~CProjectView()
{
}

BOOL CProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
    cs.style|=LVS_REPORT;
	return CListView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CProjectView drawing

void CProjectView::OnDraw(CDC* pDC)
{
	CProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CProjectView::OnInitialUpdate()
{
	CListView::OnInitialUpdate();
	DispZhuceInfo("");

	// TODO: You may populate your ListView with items by directly accessing
	//  its list control through a call to GetListCtrl().
}

/////////////////////////////////////////////////////////////////////////////
// CProjectView printing

BOOL CProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CProjectView diagnostics

#ifdef _DEBUG
void CProjectView::AssertValid() const
{
	CListView::AssertValid();
}

void CProjectView::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

CProjectDoc* CProjectView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CProjectDoc)));
	return (CProjectDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CProjectView message handlers

void CProjectView::DeleteAllColumn()
{
	CListCtrl& m_ListCtrl = GetListCtrl();
	int nCount = 0;
	CHeaderCtrl* pHeaderCtrl = m_ListCtrl.GetHeaderCtrl();
	if ( pHeaderCtrl!= NULL)
		nCount = pHeaderCtrl->GetItemCount();

	for (int i=0;i < nCount;i++)
		m_ListCtrl.DeleteColumn(0);
}



void CProjectView::DispZhuceInfo(CString strFilter)
{
	DeleteAllColumn();	
	CListCtrl& m_ListCtrl = GetListCtrl();
	CString strHeader[]={"username", "password","id","phone"};
	for (int nCol=0; nCol<sizeof(strHeader)/sizeof(CString); nCol++)
		m_ListCtrl.InsertColumn(nCol,strHeader[nCol],LVCFMT_LEFT,100);
	m_ListCtrl.DeleteAllItems();	
	CNewSet sSet;
	sSet.m_strFilter = strFilter;
	sSet.m_strSort = "username,password";
	sSet.Open();
	int nItem = 0;
	CString str;
	while (!sSet.IsEOF())
	{
		m_ListCtrl.InsertItem( nItem, sSet.m_username);		
		m_ListCtrl.SetItemText( nItem, 1, sSet.m_password);
		m_ListCtrl.SetItemText( nItem, 2, sSet.m_id);
		m_ListCtrl.SetItemText( nItem, 3, sSet.m_phone);
		nItem++;
		sSet.MoveNext();
	}
	sSet.Close();
}

void CProjectView::OnAdd() 
{
	CZhuceDlg dlg;
	if (dlg.DoModal()!= IDOK) return;
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
	MessageBox("Please wait a few seconds, then click OK.","Notice",MB_OK|MB_ICONINFORMATION);
	m_strFilter.Format("username='%s'", dlg.m_strusername);
	DispZhuceInfo( m_strFilter );
}

int CProjectView::GetListCtrlCurSel()
{
	CListCtrl& m_ListCtrl = GetListCtrl();
	POSITION pos;
	pos = m_ListCtrl.GetFirstSelectedItemPosition();
	if (pos == NULL){
		MessageBox("Please select a list item.");
		return -1;
	}
	return m_ListCtrl.GetNextSelectedItem( pos );
}

void CProjectView::OnDel() 
{
	// TODO: Add your command handler code here
	int nItem = GetListCtrlCurSel();
	if (nItem<0) return;
	CListCtrl& m_ListCtrl = GetListCtrl();
	CString strItem, str;
	strItem = m_ListCtrl.GetItemText( nItem, 0 );
	str.Format("Delete the record for %s?", strItem );
	if ( IDOK != MessageBox(str, "Confirm Deletion", MB_ICONQUESTION | MB_OKCANCEL ))
		return;
		
	CString strusername = m_ListCtrl.GetItemText( nItem, 0 );
	CString strpassword = m_ListCtrl.GetItemText( nItem, 1 );


	CNewSet infoSet;
	infoSet.m_strFilter.Format("username='%s' AND password='%s'", strusername, strpassword);
	infoSet.Open();
	if (!infoSet.IsEOF()) {	
		CRecordsetStatus status;
		infoSet.GetStatus(status);			
		infoSet.Delete();				
		if (status.m_lCurrentRecord==0)		
			infoSet.MoveNext();			
		else
			infoSet.MoveFirst();		
	}
	if (infoSet.IsOpen()) infoSet.Close();
	MessageBox("Please wait a few seconds, then click OK.","Notice",MB_OK|MB_ICONINFORMATION);
	DispZhuceInfo( m_strFilter );
}

void CProjectView::OnChange() 
{
	int nItem = GetListCtrlCurSel();
	if (nItem<0) return;
	CListCtrl& m_ListCtrl = GetListCtrl();
	CString strusername= m_ListCtrl.GetItemText( nItem, 0 );
	CString strpassword = m_ListCtrl.GetItemText( nItem, 1 );

	CNewSet sSet;
	sSet.m_strFilter.Format("username='%s' AND password='%s'", strusername, strpassword);
	sSet.Open();

	CZhuceDlg dlg;
	dlg.strOKText		= "Edit";
	dlg.m_strusername	= sSet.m_username;
	dlg.m_strpassword	= sSet.m_password;
	dlg.m_fid	    	= sSet.m_id;
	dlg.m_strphone		= sSet.m_phone;

	if (IDOK != dlg.DoModal())
	{
		if (sSet.IsOpen()) sSet.Close();
		return;
	}
	sSet.Edit();
	sSet.m_username		= dlg.m_strusername;
	sSet.m_password	    = dlg.m_strpassword;
	sSet.m_id		    = dlg.m_fid;
	sSet.m_phone		= dlg.m_strphone;
	sSet.Update();
	sSet.Requery();
	if (sSet.IsOpen()) sSet.Close();

	MessageBox("Please wait a few seconds, then click OK.","Notice",MB_OK|MB_ICONINFORMATION);	
	m_strFilter.Format("username='%s'", dlg.m_strusername);
	DispZhuceInfo( m_strFilter );
}


