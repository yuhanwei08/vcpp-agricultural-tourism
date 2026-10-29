// SpDocument.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "SpDocument.h"
#include "windows.h"
#include "mmsystem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSpDocument

IMPLEMENT_DYNCREATE(CSpDocument, CDocument)

CSpDocument::CSpDocument()
{
}

BOOL CSpDocument::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
	// 创建Windows Media Player控件  C
	Wnd* pPlayer = new CWnd();  
	pPlayer->Create(_T("Windows Media Player"), CWnd::rcDefault, CRect(10, 10, 300, 250), this);    // 设置要播放的视频文件  
	((CMediaCtrl*)pPlayer)->SetURL(_T("res.mp4"));  
	((CMediaCtrl*)pPlayer)->Show();

	// 创建MCI对象  
	MCIDEVICEID mciId = NULL;  
	mciId = mciSendString(_T("open D:\\Video.mp4 type MPEG-1 video layer 3 noaudio"), NULL, 0, NULL);  
	if (mciId == NULL) {      // 处理错误  
	}    // 关联到Windows Media Player控件  
	((CMediaCtrl*)pPlayer)->SetMCI(mciId);

	// 释放MCI对象  
	mciSendString(_T("close "), NULL, 0, NULL);    // 释放Windows Media Player控件  
	delete pPlayer;


}

CSpDocument::~CSpDocument()
{
}


BEGIN_MESSAGE_MAP(CSpDocument, CDocument)
	//{{AFX_MSG_MAP(CSpDocument)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSpDocument diagnostics

#ifdef _DEBUG
void CSpDocument::AssertValid() const
{
	CDocument::AssertValid();
}

void CSpDocument::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSpDocument serialization

void CSpDocument::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSpDocument commands
