

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Jun 19 16:06:33 2015
 */
/* Compiler settings for Grafik.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Grafik_i_h__
#define __Grafik_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGrafCtl_FWD_DEFINED__
#define __IGrafCtl_FWD_DEFINED__
typedef interface IGrafCtl IGrafCtl;
#endif 	/* __IGrafCtl_FWD_DEFINED__ */


#ifndef ___IGrafCtlEvents_FWD_DEFINED__
#define ___IGrafCtlEvents_FWD_DEFINED__
typedef interface _IGrafCtlEvents _IGrafCtlEvents;
#endif 	/* ___IGrafCtlEvents_FWD_DEFINED__ */


#ifndef __GrafCtl_FWD_DEFINED__
#define __GrafCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class GrafCtl GrafCtl;
#else
typedef struct GrafCtl GrafCtl;
#endif /* __cplusplus */

#endif 	/* __GrafCtl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IGrafCtl_INTERFACE_DEFINED__
#define __IGrafCtl_INTERFACE_DEFINED__

/* interface IGrafCtl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGrafCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B77909F0-4E18-4A8F-B162-1EAF1D093257")
    IGrafCtl : public IDispatch
    {
    public:
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BackColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BackColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_BorderColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_BorderColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_FillColor( 
            /* [in] */ OLE_COLOR clr) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_FillColor( 
            /* [retval][out] */ OLE_COLOR *pclr) = 0;
        
        virtual /* [id][requestedit][bindable][propputref] */ HRESULT STDMETHODCALLTYPE putref_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ IFontDisp *pFont) = 0;
        
        virtual /* [id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IFontDisp **ppFont) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Click( 
            /* [retval][out] */ SHORT *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Click( 
            /* [in] */ SHORT newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_xMin( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_xMin( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_xMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_xMax( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_yMin( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_yMin( 
            /* [in] */ DOUBLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_yMax( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_yMax( 
            /* [in] */ DOUBLE newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGrafCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGrafCtl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGrafCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGrafCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGrafCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGrafCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGrafCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGrafCtl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackColor )( 
            IGrafCtl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackColor )( 
            IGrafCtl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BorderColor )( 
            IGrafCtl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BorderColor )( 
            IGrafCtl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FillColor )( 
            IGrafCtl * This,
            /* [in] */ OLE_COLOR clr);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FillColor )( 
            IGrafCtl * This,
            /* [retval][out] */ OLE_COLOR *pclr);
        
        /* [id][requestedit][bindable][propputref] */ HRESULT ( STDMETHODCALLTYPE *putref_Font )( 
            IGrafCtl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IGrafCtl * This,
            /* [in] */ IFontDisp *pFont);
        
        /* [id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IGrafCtl * This,
            /* [retval][out] */ IFontDisp **ppFont);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Click )( 
            IGrafCtl * This,
            /* [retval][out] */ SHORT *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Click )( 
            IGrafCtl * This,
            /* [in] */ SHORT newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_xMin )( 
            IGrafCtl * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_xMin )( 
            IGrafCtl * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_xMax )( 
            IGrafCtl * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_xMax )( 
            IGrafCtl * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_yMin )( 
            IGrafCtl * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_yMin )( 
            IGrafCtl * This,
            /* [in] */ DOUBLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_yMax )( 
            IGrafCtl * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_yMax )( 
            IGrafCtl * This,
            /* [in] */ DOUBLE newVal);
        
        END_INTERFACE
    } IGrafCtlVtbl;

    interface IGrafCtl
    {
        CONST_VTBL struct IGrafCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGrafCtl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGrafCtl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGrafCtl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGrafCtl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGrafCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGrafCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGrafCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGrafCtl_put_BackColor(This,clr)	\
    ( (This)->lpVtbl -> put_BackColor(This,clr) ) 

#define IGrafCtl_get_BackColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BackColor(This,pclr) ) 

#define IGrafCtl_put_BorderColor(This,clr)	\
    ( (This)->lpVtbl -> put_BorderColor(This,clr) ) 

#define IGrafCtl_get_BorderColor(This,pclr)	\
    ( (This)->lpVtbl -> get_BorderColor(This,pclr) ) 

#define IGrafCtl_put_FillColor(This,clr)	\
    ( (This)->lpVtbl -> put_FillColor(This,clr) ) 

#define IGrafCtl_get_FillColor(This,pclr)	\
    ( (This)->lpVtbl -> get_FillColor(This,pclr) ) 

#define IGrafCtl_putref_Font(This,pFont)	\
    ( (This)->lpVtbl -> putref_Font(This,pFont) ) 

#define IGrafCtl_put_Font(This,pFont)	\
    ( (This)->lpVtbl -> put_Font(This,pFont) ) 

#define IGrafCtl_get_Font(This,ppFont)	\
    ( (This)->lpVtbl -> get_Font(This,ppFont) ) 

#define IGrafCtl_get_Click(This,pVal)	\
    ( (This)->lpVtbl -> get_Click(This,pVal) ) 

#define IGrafCtl_put_Click(This,newVal)	\
    ( (This)->lpVtbl -> put_Click(This,newVal) ) 

#define IGrafCtl_get_xMin(This,pVal)	\
    ( (This)->lpVtbl -> get_xMin(This,pVal) ) 

#define IGrafCtl_put_xMin(This,newVal)	\
    ( (This)->lpVtbl -> put_xMin(This,newVal) ) 

#define IGrafCtl_get_xMax(This,pVal)	\
    ( (This)->lpVtbl -> get_xMax(This,pVal) ) 

#define IGrafCtl_put_xMax(This,newVal)	\
    ( (This)->lpVtbl -> put_xMax(This,newVal) ) 

#define IGrafCtl_get_yMin(This,pVal)	\
    ( (This)->lpVtbl -> get_yMin(This,pVal) ) 

#define IGrafCtl_put_yMin(This,newVal)	\
    ( (This)->lpVtbl -> put_yMin(This,newVal) ) 

#define IGrafCtl_get_yMax(This,pVal)	\
    ( (This)->lpVtbl -> get_yMax(This,pVal) ) 

#define IGrafCtl_put_yMax(This,newVal)	\
    ( (This)->lpVtbl -> put_yMax(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGrafCtl_INTERFACE_DEFINED__ */



#ifndef __GrafikLib_LIBRARY_DEFINED__
#define __GrafikLib_LIBRARY_DEFINED__

/* library GrafikLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_GrafikLib;

#ifndef ___IGrafCtlEvents_DISPINTERFACE_DEFINED__
#define ___IGrafCtlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IGrafCtlEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IGrafCtlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("00B8E4FA-3543-446E-9B5A-BBDA3BBAB8CE")
    _IGrafCtlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IGrafCtlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IGrafCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IGrafCtlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IGrafCtlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IGrafCtlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IGrafCtlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IGrafCtlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IGrafCtlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IGrafCtlEventsVtbl;

    interface _IGrafCtlEvents
    {
        CONST_VTBL struct _IGrafCtlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IGrafCtlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IGrafCtlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IGrafCtlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IGrafCtlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IGrafCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IGrafCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IGrafCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IGrafCtlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GrafCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("B0626949-F7DE-457F-9AFC-A5B445F307F6")
GrafCtl;
#endif
#endif /* __GrafikLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


