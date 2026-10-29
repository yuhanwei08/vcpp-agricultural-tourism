// projectDoc.h : interface of the CProjectDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROJECTDOC_H__11D28A52_FB07_43CB_AFC3_AB17995DBA00__INCLUDED_)
#define AFX_PROJECTDOC_H__11D28A52_FB07_43CB_AFC3_AB17995DBA00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProjectDoc : public CDocument
{
protected: // create from serialization only
	CProjectDoc();
	DECLARE_DYNCREATE(CProjectDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CProjectDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProjectDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTDOC_H__11D28A52_FB07_43CB_AFC3_AB17995DBA00__INCLUDED_)
