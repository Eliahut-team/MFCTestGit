
// MFCTestGit.h : main header file for the MFCTestGit application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCTestGitApp:
// See MFCTestGit.cpp for the implementation of this class
//

class CMFCTestGitApp : public CWinApp
{
public:
	CMFCTestGitApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCTestGitApp theApp;
