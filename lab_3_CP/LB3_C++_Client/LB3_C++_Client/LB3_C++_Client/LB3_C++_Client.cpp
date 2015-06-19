// LB3_C++_Client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <tchar.h> 
#include <stdio.h>
#include <conio.h>
#include <initguid.h>
#include "C:\IIT\���\lab_3_CP\Lb3_AutoSvr\Lb3_AutoSvr\Lb3_AutoSvr_i.h"

int _tmain(int argc, _TCHAR* argv[])
{	  
		// ���������������� ���������� OLE. 
		HRESULT hr = OleInitialize(NULL);

		// �������� CLSID ����������.
		wchar_t progid[] = L"Lb3_AutoSvr.CoMyMath.1";
		CLSID clsid; 
		hr = ::CLSIDFromProgID(progid, &clsid);

		// ������� ���������. 
		IDispatch* pIDispatch = NULL; 
		hr = ::CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, 
		IID_IDispatch, (void**)&pIDispatch);


		//Fun91---------------------------------------------------------
		DISPID dispid; 
		OLECHAR* name = L"Fun91"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // ������ ����IID_NULL 
		&name,   // ��� �������
		1,  // ����� ����
		GetUserDefaultLCID(), // ���������� �����������   
		&dispid);   // ������������� �������������
				
		
		VARIANTARG *varg = new VARIANTARG[2];//������������ ���������
		::VariantInit(&varg[0]); // ����������������VARIANT
		::VariantInit(&varg[1]); // ����������������VARIANT				
		varg[0].vt = VT_INT;   // ��� ������VARIANT		
		varg[0].intVal = 8;  // ������ ���VARIANT 
		varg[1].vt = VT_INT;   // ��� ������VARIANT		
		varg[1].intVal = 7;  // ������ ���VARIANT

					
		VARIANT vargResult[1];//������������ ���������
		::VariantInit(&vargResult[0]); // ����������������VARIANT
		vargResult[0].vt = VT_R8;   // ��� ������VARIANT		
		
		// ����������� ��������� ��� Fun91 
		DISPPARAMS dispparams;
		dispparams.cArgs = 2;
		dispparams.rgvarg = varg;
		dispparams.cNamedArgs = 0;
		dispparams.rgdispidNamedArgs = NULL;


		
		// ���������� �����Invoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // ������ ���� IID_NULL 
		GetUserDefaultLCID(), // ���������� �����������
		DISPATCH_METHOD,   // �����
		&dispparams,   // ��������� ������
		&vargResult[0],  // ����������
		NULL,  // ����������
		NULL);   // ������ � ���������

		DOUBLE res = 0;
		res = vargResult[0].dblVal;
		printf("Fun91>>  %lf\n", res);
		//End--Fun91---------------------------------------------------------
		//Fun92--------------------------------------------------------------
		
		name = L"Fun92"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // ������ ����IID_NULL 
		&name,   // ��� �������
		1,  // ����� ����
		GetUserDefaultLCID(), // ���������� �����������   
		&dispid);   // ������������� �������������

		VARIANTARG *varg1 = new VARIANTARG[3];//������������ ���������
		::VariantInit(&varg1[0]); // ����������������VARIANT
		::VariantInit(&varg1[1]); // ����������������VARIANT				
		varg1[0].vt = VT_INT;   // ��� ������VARIANT		
		varg1[0].intVal = 8;  // ������ ���VARIANT 
		varg1[1].vt = VT_INT;   // ��� ������VARIANT		
		varg1[1].intVal = 7;  // ������ ���VARIANT
		varg1[2].vt = VT_INT;   // ��� ������VARIANT		
		varg1[2].intVal = 7;  // ������ ���VARIANT
					
		VARIANT vargResult1[1];//������������ ���������
		::VariantInit(&vargResult1[0]); // ����������������VARIANT
		vargResult1[0].vt = VT_INT;   // ��� ������VARIANT		
		
		// ����������� ��������� ��� Fun91 
		DISPPARAMS dispparams1;
		dispparams1.cArgs = 3;
		dispparams1.rgvarg = varg1;
		dispparams1.cNamedArgs = 0;
		dispparams1.rgdispidNamedArgs = NULL;


		
		// ���������� �����Invoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // ������ ���� IID_NULL 
		GetUserDefaultLCID(), // ���������� �����������
		DISPATCH_METHOD,   // �����
		&dispparams1,   // ��������� ������
		&vargResult1[0],  // ����������
		NULL,  // ����������
		NULL);   // ������ � ���������

		int res52 = 0;
		res52 = vargResult1[0].intVal;
		printf("Fun92>>  %d\n", res52);
		//End--Fun93---------------------------------------------------------
		//Fun93--------------------------------------------------------------
		name = L"Fun93"; 
		pIDispatch->GetIDsOfNames( 
		IID_NULL, // ������ ����IID_NULL 
		&name,   // ��� �������
		1,  // ����� ����
		GetUserDefaultLCID(), // ���������� �����������   
		&dispid);   // ������������� �������������

		VARIANTARG *varg2 = new VARIANTARG[1];//������������ ���������
		::VariantInit(&varg2[0]); // ����������������VARIANT
		varg2[0].vt = VT_R8;   // ��� ������VARIANT		
		varg2[0].dblVal = 8;  // ������ ���VARIANT 
		
					
		VARIANT vargResult2[1];//������������ ���������
		::VariantInit(&vargResult2[0]); // ����������������VARIANT
		vargResult2[0].vt = VT_R8;   // ��� ������VARIANT		
		
		// ����������� ��������� ��� Fun91 
		DISPPARAMS dispparams2;
		dispparams2.cArgs = 1;
		dispparams2.rgvarg = varg2;
		dispparams2.cNamedArgs = 0;
		dispparams2.rgdispidNamedArgs = NULL;


		
		// ���������� �����Invoke 
		hr = pIDispatch->Invoke(dispid,   // DISPID 
		IID_NULL,  // ������ ���� IID_NULL 
		GetUserDefaultLCID(), // ���������� �����������
		DISPATCH_METHOD,   // �����
		&dispparams2,   // ��������� ������
		&vargResult2[0],  // ����������
		NULL,  // ����������
		NULL);   // ������ � ���������

		res = 0;
		res = vargResult2[0].dblVal;
		printf("Fun93>>  %lf\n", res);
		//End--Fun93---------------------------------------------------------
		getch();
	return 0;
}

