// TestView1.cpp : implementation file
//

#include "stdafx.h"
#include "ViewInDlg.h"
#include "TestView1.h"


// CTestView1

IMPLEMENT_DYNCREATE(CTestView1, CScrollView)

CTestView1::CTestView1()
{

}

CTestView1::~CTestView1()
{
}


BEGIN_MESSAGE_MAP(CTestView1, CScrollView)
	ON_WM_MOUSEACTIVATE()
END_MESSAGE_MAP()


// CTestView1 drawing

void CTestView1::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 1000;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CTestView1::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}


// CTestView1 diagnostics

#ifdef _DEBUG
void CTestView1::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CTestView1::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CTestView1 message handlers

afx_msg int CTestView1::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	return CWnd::OnMouseActivate(pDesktopWnd, nHitTest, message);
}
