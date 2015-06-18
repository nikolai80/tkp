// LB3_C++_Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <conio.h>
#include <initguid.h>
#include "C:\IIT\ТКП\lab_3_CP\Lb3_AutoSvr\Lb3_AutoSvr\Lb3_AutoSvr_i.h"

int _tmain(int argc, _TCHAR* argv[])
{	  
		// Инициализировать библиотеку OLE. 
		HRESULT hr = OleInitialize(NULL);

		// Получить CLSID приложения.
		wchar_t progid[] = L"Lb3_AutoSvr.CoMyMath.1";
		CLSID clsid; 
		hr = ::CLSIDFromProgID(progid, &clsid);

		// Создать компонент. 
		IDispatch* pIDispatch = NULL; 
		hr = ::CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, 
		IID_IDispatch, (void**)&pIDispatch);


		//Fun91---------------------------------------------------------
		DISPID dispid; 
		OLECHAR* name = L"Fun91"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // Должно бытьIID_NULL 
		&name,   // Имя функции
		1,  // Число имен
		GetUserDefaultLCID(), // Информация локализации   
		&dispid);   // Диспетчерский идентификатор
				
		
		VARIANTARG *varg = new VARIANTARG[2];//передаваемые параметры
		::VariantInit(&varg[0]); // ИнициализироватьVARIANT
		::VariantInit(&varg[1]); // ИнициализироватьVARIANT				
		varg[0].vt = VT_INT;   // Тип данныхVARIANT		
		varg[0].intVal = 8;  // Данные дляVARIANT 
		varg[1].vt = VT_INT;   // Тип данныхVARIANT		
		varg[1].intVal = 7;  // Данные дляVARIANT

					
		VARIANT vargResult[1];//возвращаемые параметры
		::VariantInit(&vargResult[0]); // ИнициализироватьVARIANT
		vargResult[0].vt = VT_R8;   // Тип данныхVARIANT		
		
		// Подготовить аргументы для Fun91 
		DISPPARAMS dispparams;
		dispparams.cArgs = 2;
		dispparams.rgvarg = varg;
		dispparams.cNamedArgs = 0;
		dispparams.rgdispidNamedArgs = NULL;


		
		// Простейший вызовInvoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // Должно быть IID_NULL 
		GetUserDefaultLCID(), // Информация локализации
		DISPATCH_METHOD,   // Метод
		&dispparams,   // Аргументы метода
		&vargResult[0],  // Результаты
		NULL,  // Исключение
		NULL);   // Ошибка в аргументе

		DOUBLE res = 0;
		res = vargResult[0].dblVal;
		printf("Fun91>>  %lf\n", res);
		//End--Fun91---------------------------------------------------------
		//Fun92--------------------------------------------------------------
		
		name = L"Fun92"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // Должно бытьIID_NULL 
		&name,   // Имя функции
		1,  // Число имен
		GetUserDefaultLCID(), // Информация локализации   
		&dispid);   // Диспетчерский идентификатор

		VARIANTARG *varg1 = new VARIANTARG[3];//передаваемые параметры
		::VariantInit(&varg1[0]); // ИнициализироватьVARIANT
		::VariantInit(&varg1[1]); // ИнициализироватьVARIANT				
		varg1[0].vt = VT_INT;   // Тип данныхVARIANT		
		varg1[0].intVal = 8;  // Данные дляVARIANT 
		varg1[1].vt = VT_INT;   // Тип данныхVARIANT		
		varg1[1].intVal = 7;  // Данные дляVARIANT
		varg1[2].vt = VT_INT;   // Тип данныхVARIANT		
		varg1[2].intVal = 7;  // Данные дляVARIANT
					
		VARIANT vargResult1[1];//возвращаемые параметры
		::VariantInit(&vargResult1[0]); // ИнициализироватьVARIANT
		vargResult1[0].vt = VT_INT;   // Тип данныхVARIANT		
		
		// Подготовить аргументы для Fun91 
		DISPPARAMS dispparams1;
		dispparams1.cArgs = 3;
		dispparams1.rgvarg = varg1;
		dispparams1.cNamedArgs = 0;
		dispparams1.rgdispidNamedArgs = NULL;


		
		// Простейший вызовInvoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // Должно быть IID_NULL 
		GetUserDefaultLCID(), // Информация локализации
		DISPATCH_METHOD,   // Метод
		&dispparams1,   // Аргументы метода
		&vargResult1[0],  // Результаты
		NULL,  // Исключение
		NULL);   // Ошибка в аргументе

		int res52 = 0;
		res52 = vargResult1[0].intVal;
		printf("Fun92>>  %d\n", res52);
		//End--Fun93---------------------------------------------------------
		//Fun93--------------------------------------------------------------
		name = L"Fun93"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // Должно бытьIID_NULL 
		&name,   // Имя функции
		1,  // Число имен
		GetUserDefaultLCID(), // Информация локализации   
		&dispid);   // Диспетчерский идентификатор

		VARIANTARG *varg2 = new VARIANTARG[1];//передаваемые параметры
		::VariantInit(&varg2[0]); // ИнициализироватьVARIANT
		varg2[0].vt = VT_R8;   // Тип данныхVARIANT		
		varg2[0].dblVal = 8;  // Данные дляVARIANT 
		
					
		VARIANT vargResult2[1];//возвращаемые параметры
		::VariantInit(&vargResult2[0]); // ИнициализироватьVARIANT
		vargResult2[0].vt = VT_R8;   // Тип данныхVARIANT		
		
		// Подготовить аргументы для Fun91 
		DISPPARAMS dispparams2;
		dispparams2.cArgs = 1;
		dispparams2.rgvarg = varg2;
		dispparams2.cNamedArgs = 0;
		dispparams2.rgdispidNamedArgs = NULL;


		
		// Простейший вызовInvoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // Должно быть IID_NULL 
		GetUserDefaultLCID(), // Информация локализации
		DISPATCH_METHOD,   // Метод
		&dispparams2,   // Аргументы метода
		&vargResult2[0],  // Результаты
		NULL,  // Исключение
		NULL);   // Ошибка в аргументе

		res = 0;
		res = vargResult2[0].dblVal;
		printf("Fun93>>  %lf\n", res);
		//End--Fun93---------------------------------------------------------
		getch();
	return 0;
}

