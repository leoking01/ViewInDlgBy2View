// ViewInDlgView.h : interface of the CViewInDlgView class
//


#pragma once


class CViewInDlgView : public CView
{
protected: // create from serialization only
	CViewInDlgView();
	DECLARE_DYNCREATE(CViewInDlgView)

// Attributes
public:
	CViewInDlgDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CViewInDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ViewInDlgView.cpp
inline CViewInDlgDoc* CViewInDlgView::GetDocument() const
   { return reinterpret_cast<CViewInDlgDoc*>(m_pDocument); }
#endif

