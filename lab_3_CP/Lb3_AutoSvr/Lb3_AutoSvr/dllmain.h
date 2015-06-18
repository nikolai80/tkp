// dllmain.h : Declaration of module class.

class CLb3_AutoSvrModule : public ATL::CAtlDllModuleT< CLb3_AutoSvrModule >
{
public :
	DECLARE_LIBID(LIBID_Lb3_AutoSvrLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_LB3_AUTOSVR, "{BECFE258-9789-4FA6-9678-60C997F318CE}")
};

extern class CLb3_AutoSvrModule _AtlModule;
