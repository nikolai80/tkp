//
// IFN_09.h
//

// {B2CB6BE1-8640-4B31-9A27-D55160DD441B}
DEFINE_GUID(CLSID_FN_09,
	0xb2cb6be1, 0x8640, 0x4b31, 0x9a, 0x27, 0xd5, 0x51, 0x60, 0xdd, 0x44, 0x1b);

// {1181CF90-9FED-4705-83FC-1BD585588EB8}
DEFINE_GUID(IID_IFN_09,
	0x1181cf90, 0x9fed, 0x4705, 0x83, 0xfc, 0x1b, 0xd5, 0x85, 0x58, 0x8e, 0xb8);

//// {9151C908-3FF0-4FAF-8D5A-56A42158C02E}
//DEFINE_GUID(CLSID_Ver, 
//0x9151c908, 0x3ff0, 0x4faf, 0x8d, 0x5a, 0x56, 0xa4, 0x21, 0x58, 0xc0, 0x2e);
//
// {64CA373B-F39C-4136-ADFE-A2DFE3A48DF5}
DEFINE_GUID(IID_IVer,
	0x64ca373b, 0xf39c, 0x4136, 0xad, 0xfe, 0xa2, 0xdf, 0xe3, 0xa4, 0x8d, 0xf5);


class IFN_09 : public IUnknown
	{
	public:
		STDMETHOD(Fun91(int, int, int*)) PURE;
		STDMETHOD(Fun92(float, float, float*)) PURE;
		STDMETHOD(Fun93(double, double*)) PURE;
		//STDMETHOD(  GetAutor()) PURE;
	};

class IVer : public IUnknown
	{
	public:
		//STDMETHOD(  GetAutor(wchar_t ** author)) PURE;
		STDMETHOD(GetAutor()) PURE;
	};