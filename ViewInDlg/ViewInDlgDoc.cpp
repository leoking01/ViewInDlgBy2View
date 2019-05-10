// ViewInDlgDoc.cpp : implementation of the CViewInDlgDoc class
//

#include "stdafx.h"
#include "ViewInDlg.h"

#include "ViewInDlgDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CViewInDlgDoc

IMPLEMENT_DYNCREATE(CViewInDlgDoc, CDocument)

BEGIN_MESSAGE_MAP(CViewInDlgDoc, CDocument)
END_MESSAGE_MAP()


// CViewInDlgDoc construction/destruction

CViewInDlgDoc::CViewInDlgDoc()
{
	// TODO: add one-time construction code here

}

CViewInDlgDoc::~CViewInDlgDoc()
{
}

BOOL CViewInDlgDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CViewInDlgDoc serialization

void CViewInDlgDoc::Serialize(CArchive& ar)
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


// CViewInDlgDoc diagnostics

#ifdef _DEBUG
void CViewInDlgDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CViewInDlgDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CViewInDlgDoc commands
