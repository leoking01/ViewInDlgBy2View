#pragma once



// CTestView1 view

class CTestView1 : public CScrollView
{
	DECLARE_DYNCREATE(CTestView1)

protected:
	CTestView1();           // protected constructor used by dynamic creation
	virtual ~CTestView1();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	virtual void OnInitialUpdate();     // first time after construct

	DECLARE_MESSAGE_MAP()
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);
};


