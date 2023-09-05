
// winproc_mfc.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cwinproc_mfcApp:
// See winproc_mfc.cpp for the implementation of this class
//

class Cwinproc_mfcApp : public CWinApp
{
public:
	Cwinproc_mfcApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cwinproc_mfcApp theApp;