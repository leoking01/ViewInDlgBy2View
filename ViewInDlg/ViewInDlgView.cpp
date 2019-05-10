// ViewInDlgView.cpp : implementation of the CViewInDlgView class
//

#include "stdafx.h"
#include "ViewInDlg.h"

#include "ViewInDlgDoc.h"
#include "ViewInDlgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CViewInDlgView

IMPLEMENT_DYNCREATE(CViewInDlgView, CView)

BEGIN_MESSAGE_MAP(CViewInDlgView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CViewInDlgView construction/destruction

CViewInDlgView::CViewInDlgView()
{
	// TODO: add construction code here

}

CViewInDlgView::~CViewInDlgView()
{
}

BOOL CViewInDlgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CViewInDlgView drawing

void CViewInDlgView::OnDraw(CDC* /*pDC*/)
{
	CViewInDlgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CViewInDlgView printing

BOOL CViewInDlgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CViewInDlgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CViewInDlgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CViewInDlgView diagnostics

#ifdef _DEBUG
void CViewInDlgView::AssertValid() const
{
	CView::AssertValid();
}

void CViewInDlgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CViewInDlgDoc* CViewInDlgView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CViewInDlgDoc)));
	return (CViewInDlgDoc*)m_pDocument;
}
#endif //_DEBUG


// CViewInDlgView message handlers
