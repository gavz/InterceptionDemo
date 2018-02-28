// dllmain.h : Declaration of module class.

class CCalculatorsSvrModule : public ATL::CAtlDllModuleT< CCalculatorsSvrModule >
{
public :
	DECLARE_LIBID(LIBID_CalculatorsSvrLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CALCULATORSSVR, "{3cf7826d-a9d9-45b7-953e-4d91a67012b6}")
};

extern class CCalculatorsSvrModule _AtlModule;
