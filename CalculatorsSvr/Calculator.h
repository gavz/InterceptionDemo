// Calculator.h : Declaration of the CCalculator

#pragma once
#include "resource.h"       // main symbols



#include "CalculatorsSvr_i.h"

using namespace ATL;


// CCalculator

class ATL_NO_VTABLE CCalculator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCalculator, &CLSID_Calculator>,
	public IDispatchImpl<ICalculator>
{
public:
	CCalculator()
	{
	}

DECLARE_REGISTRY_RESOURCEID(107)


BEGIN_COM_MAP(CCalculator)
	COM_INTERFACE_ENTRY(ICalculator)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	VARIANT_BOOL m_Radians = VARIANT_FALSE;


	STDMETHOD(Add)(double a, double b, double* result);
	STDMETHOD(Sin)(double angle, double* result);
	STDMETHOD(get_Radians)(VARIANT_BOOL* pVal);
	STDMETHOD(put_Radians)(VARIANT_BOOL newVal);
};

//OBJECT_ENTRY_AUTO(__uuidof(Calculator), CCalculator)
