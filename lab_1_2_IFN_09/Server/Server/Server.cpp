//
// server.cpp : Defines the initialization routines for the DLL.
//

#include <windows.h>

#include <initguid.h>
#include "CFN_09.h"
//#include "CVer.h"
#include "Registry.h"

long    g_lObjs = 0;
long    g_lLocks = 0;
static HMODULE g_hModule = NULL;   // DLL module handle

// Friendly name of component
TCHAR g_szFriendlyName[] = "FN_09_Lab1 Component";

// Version-independent ProgID
TCHAR g_szVerIndProgID[] = "FN_09.Component";

// ProgID
TCHAR g_szProgID[] = "FN_09.Component.1";



STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, void** ppv)
	{
	HRESULT             hr;
	MathClassFactory    *pCF;

	pCF = 0;

	// Make sure the CLSID is for our Expression component
	if (rclsid != CLSID_FN_09)
		return(E_FAIL);

	pCF = new MathClassFactory;

	if (pCF == 0)
		return(E_OUTOFMEMORY);

	hr = pCF->QueryInterface(riid, ppv);

	// Check for failure of QueryInterface
	if (FAILED(hr))
		{
		delete pCF;
		pCF = 0;
		}

	return hr;
	}

STDAPI DllCanUnloadNow(void)
	{
	if (g_lObjs || g_lLocks)
		return(S_FALSE);
	else
		return(S_OK);
	}
// Server registration
//
STDAPI DllRegisterServer()
	{
	return DllRegisterServer(g_hModule,
		CLSID_FN_09,
		g_szFriendlyName,
		g_szVerIndProgID,
		g_szProgID);
	}


//
// Server unregistration
//
STDAPI DllUnregisterServer()
	{
	return DllUnregisterServer(CLSID_FN_09,
		g_szVerIndProgID,
		g_szProgID);
	}

///////////////////////////////////////////////////////////
//
// DLL module information
//
BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD dwReason,
	void* lpReserved)
	{
	if (dwReason == DLL_PROCESS_ATTACH)
		{
		g_hModule = hModule;
		}
	return TRUE;
	}