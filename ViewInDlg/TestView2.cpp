// TestView2.cpp : implementation file
//

#include "stdafx.h"
#include "ViewInDlg.h"
#include "TestView2.h"


// CTestView2

IMPLEMENT_DYNCREATE(CTestView2, CScrollView)

CTestView2::CTestView2()
{

}

CTestView2::~CTestView2()
{
}


BEGIN_MESSAGE_MAP(CTestView2, CScrollView)
END_MESSAGE_MAP()


// CTestView2 drawing

void CTestView2::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CTestView2::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CTestView2 diagnostics

#ifdef _DEBUG
void CTestView2::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CTestView2::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTestView2 message handlers
