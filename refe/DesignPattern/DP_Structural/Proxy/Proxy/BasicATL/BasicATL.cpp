// BasicATL.cpp : Implementation of WinMain


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "BasicATL_i.h"


using namespace ATL;


class CBasicATLModule : public ATL::CAtlExeModuleT< CBasicATLModule >
{
public :
	DECLARE_LIBID(LIBID_BasicATLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_BASICATL, "{3654165b-ee73-4e21-87e6-78da9c3b68aa}")
};

CBasicATLModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

