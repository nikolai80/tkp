// GrafCtl.h : Declaration of the CGrafCtl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include <math.h>
#include "Grafik_i.h"
#include "_IGrafCtlEvents_CP.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

#define SIZE 500 // строна фона на котоом рисуем

// CGrafCtl
class ATL_NO_VTABLE CGrafCtl :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CStockPropImpl<CGrafCtl, IGrafCtl>,
	public IOleControlImpl<CGrafCtl>,
	public IOleObjectImpl<CGrafCtl>,
	public IOleInPlaceActiveObjectImpl<CGrafCtl>,
	public IViewObjectExImpl<CGrafCtl>,
	public IOleInPlaceObjectWindowlessImpl<CGrafCtl>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CGrafCtl>,
	public CProxy_IGrafCtlEvents<CGrafCtl>,
	public IQuickActivateImpl<CGrafCtl>,
#ifndef _WIN32_WCE
	public IDataObjectImpl<CGrafCtl>,
#endif
	public IProvideClassInfo2Impl<&CLSID_GrafCtl, &__uuidof(_IGrafCtlEvents), &LIBID_GrafikLib>,
	public CComCoClass<CGrafCtl, &CLSID_GrafCtl>,
	public CComControl<CGrafCtl>
{
public:
	CGrafCtl()
	{
		m_nClick = 0;
		m_YLine = 5;		//линия оси Х
		m_ctrlLineColor= RGB(0, 255, 0);	//цвет графика 
		m_ctrlLineXColor= RGB(0, 255, 255);	//цвет оси х
		m_clrFillColor = RGB(255, 0, 224); // фон
		xMin=0;
		xMax=0;
		yMin=0;
		yMax=0;
	}

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_INSIDEOUT |
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_GRAFCTL)


BEGIN_COM_MAP(CGrafCtl)
	COM_INTERFACE_ENTRY(IGrafCtl)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IQuickActivate)
#ifndef _WIN32_WCE
	COM_INTERFACE_ENTRY(IDataObject)
#endif
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
END_COM_MAP()

BEGIN_PROP_MAP(CGrafCtl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
#ifndef _WIN32_WCE
	PROP_ENTRY_TYPE("BackColor", DISPID_BACKCOLOR, CLSID_StockColorPage, VT_UI4)
#endif
#ifndef _WIN32_WCE
	PROP_ENTRY_TYPE("BorderColor", DISPID_BORDERCOLOR, CLSID_StockColorPage, VT_UI4)
#endif
#ifndef _WIN32_WCE
	PROP_ENTRY_TYPE("FillColor", DISPID_FILLCOLOR, CLSID_StockColorPage, VT_UI4)
#endif
#ifndef _WIN32_WCE
	PROP_ENTRY_TYPE("Font", DISPID_FONT, CLSID_StockFontPage, VT_DISPATCH)
#endif
	// Example entries
	// PROP_ENTRY_TYPE("Property Name", dispid, clsid, vtType)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CGrafCtl)
	CONNECTION_POINT_ENTRY(__uuidof(_IGrafCtlEvents))
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CGrafCtl)
	CHAIN_MSG_MAP(CComControl<CGrafCtl>)
	DEFAULT_REFLECTION_HANDLER()
	MESSAGE_HANDLER(WM_LBUTTONDOWN, OnLButtonDown)
	MESSAGE_HANDLER(WM_RBUTTONDOWN, OnRButtonDown)
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* const arr[] =
		{
			&IID_IGrafCtl,
		};

		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IGrafCtl
public:
	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		HDC hdc  = di.hdcDraw;

		COLORREF    colFore;
		HBRUSH      hOldBrush, hBrush;
		HPEN        hOldPen, hPen,hPenX;

		// Translate m_colFore into a COLORREF type
		OleTranslateColor(m_clrFillColor, NULL, &colFore);

		hPen = CreatePen(PS_SOLID,2, m_ctrlLineColor);
		hPenX = CreatePen(PS_SOLID,3, m_ctrlLineXColor);


		hBrush    = CreateSolidBrush(m_clrFillColor);
		hOldBrush = (HBRUSH)SelectObject(hdc, hBrush);
		SelectObject(hdc, hBrush);
		Rectangle(hdc,rc.left,rc.top,rc.right,rc.bottom); //фон для графика
		SelectObject(hdc, hOldBrush);
		
		if (m_nClick !=0)
		{


			hOldPen = (HPEN) SelectObject(hdc, hPenX);
			if(m_YLine!=0)
			{
				//рисуем ось x
				MoveToEx(di.hdcDraw, rc.left, m_YLine, NULL);
				LineTo(di.hdcDraw,rc.right,m_YLine);
			}

			SelectObject(hdc, hPen);
			//рисуем график 
			//----------------------------------------------
			double x = 5;
			double y = (sqrt(x) - pow(cos(x), 2));

			while (x <= 8)
			{
				MoveToEx(di.hdcDraw, (x * 50) - 200, (y * 50) - 50, NULL);
				x += 0.25;
				y = (sqrt(x) - pow((cos(x)), 2));
				LineTo(di.hdcDraw, (x * 50) - 200, (y * 50) - 50);
			}
			//----------------------------------------------------
			SelectObject(hdc, hOldPen);
		}

		return S_OK;
	}

	OLE_COLOR m_clrBackColor;
	void OnBackColorChanged()
	{
		ATLTRACE(_T("OnBackColorChanged\n"));
	}
	OLE_COLOR m_clrBorderColor;
	void OnBorderColorChanged()
	{
		ATLTRACE(_T("OnBorderColorChanged\n"));
	}
	OLE_COLOR m_clrFillColor;//для заливки
	OLE_COLOR m_ctrlLineColor;//цвет графика
	OLE_COLOR m_ctrlLineXColor;//цвет оси х

	short m_nClick;
	POINT m_arrPoint[SIZE];
	int m_YLine;
	int m_XLine;
	double xMin;
	double xMax;
	double yMin;
	double yMax;

	void OnFillColorChanged()
	{
		ATLTRACE(_T("OnFillColorChanged\n"));
	}
	CComPtr<IFontDisp> m_pFont;
	void OnFontChanged()
	{
		ATLTRACE(_T("OnFontChanged\n"));
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}
	STDMETHOD(get_Click)(SHORT* pVal);
	STDMETHOD(put_Click)(SHORT newVal);
	void CalcPoints(const RECT& rc);
	STDMETHOD(get_xMin)(DOUBLE* pVal);
	STDMETHOD(put_xMin)(DOUBLE newVal);
	STDMETHOD(get_xMax)(DOUBLE* pVal);
	STDMETHOD(put_xMax)(DOUBLE newVal);
	STDMETHOD(get_yMin)(DOUBLE* pVal);
	STDMETHOD(put_yMin)(DOUBLE newVal);
	STDMETHOD(get_yMax)(DOUBLE* pVal);
	STDMETHOD(put_yMax)(DOUBLE newVal);
	LRESULT OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnRButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

OBJECT_ENTRY_AUTO(__uuidof(GrafCtl), CGrafCtl)
