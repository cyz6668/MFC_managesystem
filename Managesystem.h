
// Managesystem.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CManagesystemApp: 
// �йش����ʵ�֣������ Managesystem.cpp
//

class CManagesystemApp : public CWinApp
{
public:
	CManagesystemApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CManagesystemApp theApp;