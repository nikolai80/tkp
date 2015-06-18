// dllmain.h : Declaration of module class.

class CGrafikModule : public ATL::CAtlDllModuleT< CGrafikModule >
{
public :
	DECLARE_LIBID(LIBID_GrafikLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_GRAFIK, "{457BC29E-EF99-4E3D-B62D-4343C29A7701}")
};

extern class CGrafikModule _AtlModule;
