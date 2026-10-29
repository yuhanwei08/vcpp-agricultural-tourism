#if !defined(AFX_SPDOCUMENT_H__77129891_4DC1_4ED8_816F_97211BF38457__INCLUDED_)
#define AFX_SPDOCUMENT_H__77129891_4DC1_4ED8_816F_97211BF38457__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SpDocument.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSpDocument document

class CSpDocument : public CDocument
{
protected:
	CSpDocument();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CSpDocument)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpDocument)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSpDocument();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CSpDocument)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPDOCUMENT_H__77129891_4DC1_4ED8_816F_97211BF38457__INCLUDED_)
