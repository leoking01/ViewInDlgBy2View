#pragma once



// CTestView2 view

class CTestView2 : public CScrollView
{
	DECLARE_DYNCREATE(CTestView2)

protected:
	CTestView2();           // protected constructor used by dynamic creation
	virtual ~CTestView2();

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
};


