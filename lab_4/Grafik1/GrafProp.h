// GrafProp.h : Declaration of the CGrafProp


#pragma once
#include "resource.h"       // main symbols


#include "Grafik_i.h"

using namespace ATL;

// CGrafProp

class ATL_NO_VTABLE CGrafProp :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGrafProp, &CLSID_GrafProp>,
	public IPropertyPageImpl<CGrafProp>,
	public ATL::CDialogImpl<CGrafProp>
{
public:
	CGrafProp()
	{
		m_dwTitleID = IDS_TITLEGRAFPROP;
		m_dwHelpFileID = IDS_HELPFILEGRAFPROP;
		m_dwDocStringID = IDS_DOCSTRINGGRAFPROP;
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

	enum {IDD = IDD_GRAFPROP};

DECLARE_REGISTRY_RESOURCEID(IDR_GRAFPROP)


BEGIN_COM_MAP(CGrafProp)
	COM_INTERFACE_ENTRY(IPropertyPage)
END_COM_MAP()

BEGIN_MSG_MAP(CGrafProp)
	CHAIN_MSG_MAP(IPropertyPageImpl<CGrafProp>)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

	STDMETHOD(Apply)(void)
	{
		ATLTRACE(_T("CGrafProp::Apply\n"));
		for (UINT i = 0; i < m_nObjects; i++)
		{
			// Do something interesting here
			// ICircCtl* pCirc;
			// m_ppUnk[i]->QueryInterface(IID_ICircCtl, (void**)&pCirc);
			// pCirc->put_Caption(CComBSTR("something special"));
			// pCirc->Release();
		}
		m_bDirty = FALSE;
		return S_OK;
	}
};


OBJECT_ENTRY_AUTO(__uuidof(GrafProp), CGrafProp)
