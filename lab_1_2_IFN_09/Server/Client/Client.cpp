// 
// Client.cpp 
// 
#include <iostream>
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <conio.h>
#include <initguid.h>
 using namespace std;

#include "d:\rybchenko\programs\tkp\lab_1_2_IFN_09\Server\Server\IFN_09.h" 
int main( int argc, char *argv[] ) 
  {
	  setlocale(LC_CTYPE, "Russian");
	  printf( "Initializing COM \n"); 
	  if ( FAILED( CoInitialize( NULL ))) 
		  { 
			  printf( "Unable to initialize COM \n"); return -1;
		  } 
	  char* szProgID = "FN_09.Component.1"; 
	  WCHAR szWideProgID[128]; 
	  CLSID clsid; 
	  long lLen = MultiByteToWideChar( CP_ACP, 0, szProgID, strlen( szProgID ), szWideProgID, sizeof( szWideProgID ) ); 
	  szWideProgID[ lLen ] = '\0'; 

	  HRESULT hr = ::CLSIDFromProgID( szWideProgID, &clsid ); 
	  if ( FAILED( hr )) 
		   { printf("Unable to get CLSID from ProgID. HR = %X \n",hr); return -1; }
 
	  IClassFactory* pCF; 
	  // Получить фабрику класса для CMath 
	  hr = CoGetClassObject( clsid, CLSCTX_INPROC, NULL, 
									  IID_IClassFactory, (void**) &pCF ); 
	  if ( FAILED( hr )) 
			{ printf("Failed to GetClassObject server instance. HR = %X \n",hr); return -1; } 
  
	  // с помощью фабрики класса создать экземпляр 
	  // компонента и получить интерфейс IUnknown. 
  
	  IUnknown* pUnk; hr = pCF->CreateInstance( NULL, IID_IUnknown, (void**) &pUnk ); 
  
	  //Release the class factory 
	  pCF->Release(); 
	  if ( FAILED( hr )) 
			{ printf("Failed to create server instance. HR =%X \n",hr); return -1; } 
	  printf("Instance created \n"); 
	  IFN_09* pMath = NULL; 
	  hr = pUnk->QueryInterface( IID_IFN_09, (LPVOID*)&pMath ); 

	  IVer* pVer=NULL; 
	  hr = pUnk->QueryInterface( IID_IVer, (LPVOID*)&pVer ); 

	  pUnk->Release(); 
	  if ( FAILED( hr )) 
			{ printf("QueryInterface() for IMath failed \n"); return -1; } 
  
  
	  int resultFun91;
	  pMath->Fun91(10, 3, &resultFun91);
	  printf("Fun91>>  10 - 3 is %.3f \n", resultFun91);

	  float resultFun92;
	  pMath->Fun92(11., 12., &resultFun92);
	  printf("Fun92>> 11 + 12 is %d \n",resultFun92);

	  double resultFun93;
	  pMath->Fun93(8, &resultFun93);
	  printf("Fun93>> 8 * 1024 is %.2f \n", resultFun93);
    
	  pVer->GetAutor();
 
	  printf("Releasing instance \n"); 
	  pVer->Release(); 
	  pMath->Release(); 


 
	  printf("Shuting down COM\n"); 
	  CoUninitialize(); 
	 getch();
	 //cin.get();
	 //system("pause");
	  return 0; 
} 
