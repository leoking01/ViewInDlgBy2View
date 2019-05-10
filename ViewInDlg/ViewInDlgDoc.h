// ViewInDlgDoc.h : interface of the CViewInDlgDoc class
//


#pragma once


class CViewInDlgDoc : public CDocument
{
protected: // create from serialization only
	CViewInDlgDoc();
	DECLARE_DYNCREATE(CViewInDlgDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CViewInDlgDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


