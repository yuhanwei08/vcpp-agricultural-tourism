// NewSet.cpp : implementation file
//

#include "stdafx.h"
#include "project.h"
#include "NewSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewSet

IMPLEMENT_DYNAMIC(CNewSet, CRecordset)

CNewSet::CNewSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CNewSet)
	m_username = _T("");
	m_password = _T("");
	m_id = _T("");
	m_phone = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CNewSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=Users");
}

CString CNewSet::GetDefaultSQL()
{
	return _T("[Users]");
}

void CNewSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CNewSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[username]"), m_username);
	RFX_Text(pFX, _T("[password]"), m_password);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[phone]"), m_phone);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CNewSet diagnostics

#ifdef _DEBUG
void CNewSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CNewSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
