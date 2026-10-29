// projectView.h : interface of the CProjectView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROJECTVIEW_H__8C1FEA2F_A8C7_4FE1_9041_0D4D3F76A32F__INCLUDED_)
#define AFX_PROJECTVIEW_H__8C1FEA2F_A8C7_4FE1_9041_0D4D3F76A32F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CProjectView : public CListView
{
protected: // create from serialization only
	CProjectView();
	DECLARE_DYNCREATE(CProjectView)

// Attributes
public:
	CProjectDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	int GetListCtrlCurSel();
	void DispZhuceInfo(CString strFilter);
	CString m_strFilter;
	void DeleteAllColumn();
	virtual ~CProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CProjectView)
	afx_msg void OnAdd();
	afx_msg void OnDel();
	afx_msg void OnChange();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in projectView.cpp
inline CProjectDoc* CProjectView::GetDocument()
   { return (CProjectDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTVIEW_H__8C1FEA2F_A8C7_4FE1_9041_0D4D3F76A32F__INCLUDED_)
