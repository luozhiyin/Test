
// MyTestProj.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMyTestProjApp:
// �йش����ʵ�֣������ MyTestProj.cpp
//

class CMyTestProjApp : public CWinApp
{
public:
	CMyTestProjApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMyTestProjApp theApp;