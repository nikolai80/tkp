//
// СMath.cpp

#include <iostream>
#include <windows.h>

#include <stdio.h>
#include "CFN_09.h"
//#include "CVer.h"
using namespace std;


//
// Math class implementation
//
// Constructors
CFN_09::CFN_09()
	{
	m_lRef = 0;

	// Увеличить значение внешнего счетчика объектов
	InterlockedIncrement(&g_lObjs);
	}

// The destructor
CFN_09::~CFN_09()
	{
	// Уменьшить значение внешнего счетчика объектов
	InterlockedDecrement(&g_lObjs);
	}
STDMETHODIMP CFN_09::QueryInterface(const IID& riid/*REFIID riid*/, void** ppv)
	{
	/**ppv = 0;

	if ( riid == IID_IUnknown || riid == IID_IFN_09 || riid == IID_IVer )
	*ppv = this;

	if ( *ppv )
	{
	AddRef();
	return( S_OK );
	}
	return (E_NOINTERFACE);*/

	if (riid == IID_IUnknown)
		{
		*ppv = this;
		}
	else if (riid == IID_IFN_09)
		{
		*ppv = static_cast<IFN_09*>(this);
		}
	else if (riid == IID_IVer)
		{
		*ppv = static_cast<IVer*>(this);
		}
	else
		{
		*ppv = NULL;
		return (E_NOINTERFACE);
		}

	AddRef();
	return(S_OK);
	}

STDMETHODIMP_(ULONG) CFN_09::AddRef()
	{
	return InterlockedIncrement(&m_lRef);
	}

STDMETHODIMP_(ULONG) CFN_09::Release()
	{
	if (InterlockedDecrement(&m_lRef) == 0)
		{
		delete this;
		return 0;
		}

	return m_lRef;
	}

STDMETHODIMP CFN_09::Fun91(int lOp1, int lOp2, int* pResult)
	{
	*pResult = lOp1 / lOp2;
	return S_OK;
	}

STDMETHODIMP CFN_09::Fun92(float lOp1, float lOp2, float* pResult)
	{
	*pResult = lOp1 + lOp2;
	return S_OK;
	}

STDMETHODIMP CFN_09::Fun93(double lOp1, double* pResult)
	{
	*pResult = lOp1 * 1024;
	return S_OK;
	}

//STDMETHODIMP CFN_09::GetAutor ( wchar_t** author )
STDMETHODIMP CFN_09::GetAutor()
	{
	/*system("chcp 1251 \s");*/
	setlocale(LC_CTYPE, "Russian");
	printf("Рыбченко Н.Н. 30331-2 \n");
	//wcout << "Рыбченко Н.Н. 30331-2" << endl;
	return S_OK;
	}

MathClassFactory::MathClassFactory()
	{
	m_lRef = 0;
	}

MathClassFactory::~MathClassFactory()
	{
	}

STDMETHODIMP MathClassFactory::QueryInterface(REFIID riid, void** ppv)
	{
	*ppv = 0;

	if (riid == IID_IUnknown || riid == IID_IClassFactory)
		*ppv = this;

	if (*ppv)
		{
		AddRef();
		return S_OK;
		}

	return(E_NOINTERFACE);

	}

STDMETHODIMP_(ULONG) MathClassFactory::AddRef()
	{
	return InterlockedIncrement(&m_lRef);
	}

STDMETHODIMP_(ULONG) MathClassFactory::Release()
	{
	if (InterlockedDecrement(&m_lRef) == 0)
		{
		delete this;
		return 0;
		}

	return m_lRef;
	}

STDMETHODIMP MathClassFactory::CreateInstance
(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj)
	{
	CFN_09*      pFN_09;
	HRESULT    hr;

	*ppvObj = 0;

	pFN_09 = new CFN_09;

	if (pFN_09 == 0)
		return(E_OUTOFMEMORY);

	hr = pFN_09->QueryInterface(riid, ppvObj);

	if (FAILED(hr))
		delete pFN_09;

	return hr;
	}

STDMETHODIMP MathClassFactory::LockServer(BOOL fLock)
	{
	if (fLock)
		InterlockedIncrement(&g_lLocks);
	else
		InterlockedDecrement(&g_lLocks);

	return S_OK;
	}
