// ViewInDlg.h : main header file for the ViewInDlg application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CViewInDlgApp:
// See ViewInDlg.cpp for the implementation of this class
//

class CViewInDlgApp : public CWinApp
{
public:
	CViewInDlgApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPopupDlg();
};

extern CViewInDlgApp theApp;