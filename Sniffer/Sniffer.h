
// Sniffer.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'pch.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// CSnifferApp:
// Consulte Sniffer.cpp para obtener información sobre la implementación de esta clase
//

class CSnifferApp : public CWinApp
{
public:
	CSnifferApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern CSnifferApp theApp;
