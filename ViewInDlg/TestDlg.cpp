// TestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ViewInDlg.h"
#include "TestDlg.h"

#include "TestView1.h"
#include "TestView2.h"

// CTestDlg dialog

IMPLEMENT_DYNAMIC(CTestDlg, CDialog)

CTestDlg::CTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestDlg::IDD, pParent)
{

}

CTestDlg::~CTestDlg()
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialog)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CTestDlg message handlers

int CTestDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here
	CSize sizeTotal;
	sizeTotal.cx = 800;
	sizeTotal.cy = 600;
	m_pTestView1 = (CView*)RUNTIME_CLASS(CTestView1)->CreateObject();
	if (m_pTestView1 != NULL)
	{
		m_pTestView1->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, CRect(0, 0, 290, 390), this, 1);
		m_pTestView1->OnInitialUpdate();
		
		((CScrollView*)m_pTestView1)->SetScrollSizes(MM_TEXT, sizeTotal);
	}
	
	m_pFrameWnd = new CFrameWnd();
	m_pFrameWnd->Create(NULL, NULL, WS_CHILD|WS_VISIBLE, CRect(300, 0, 590, 390), this);

	m_pTestView2 = (CView*)RUNTIME_CLASS(CTestView2)->CreateObject();
	if (m_pTestView2 != NULL)
	{
		m_pTestView2->Create(NULL, NULL, AFX_WS_DEFAULT_VIEW, CRect(0, 0, 290, 390), m_pFrameWnd, 2);
		m_pTestView2->OnInitialUpdate();
		((CScrollView*)m_pTestView2)->SetScrollSizes(MM_TEXT, sizeTotal);
	}
	return 0;
}

BOOL CTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	
		
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
