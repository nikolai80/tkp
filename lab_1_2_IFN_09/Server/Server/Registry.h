#ifndef __Registry_H__
#define __Registry_H__
//
// Registry.h
//   - Helper functions registering and unregistering a component.
//

// This function will register a component in the Registry.
// The component calls this function from its DllRegisterServer function.
HRESULT DllRegisterServer(HMODULE hModule,
	const CLSID& clsid,
	const char* szFriendlyName,
	const char* szVerIndProgID,
	const char* szProgID);

// This function will unregister a component.  Components
// call this function from their DllUnregisterServer function.
HRESULT DllUnregisterServer(const CLSID& clsid,
	const char* szVerIndProgID,
	const char* szProgID);

#endif