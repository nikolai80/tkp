// MyMath.cpp : Implementation of CMyMath

#include "stdafx.h"
#include "MyMath.h"


// CMyMath
STDMETHODIMP CMyMath::Fun91(int op1, int op2, double* pResult)	
//STDMETHODIMP CMyMath::Fun91()
{
	*pResult = op1 + op2;
	//printf("Fun91");
	//MessageBox(NULL,NULL, TEXT(""),MB_OK);

	return S_OK;
}
STDMETHODIMP CMyMath::Fun92(int op1, int op2, int op3, int* pResult)	
{
	*pResult = op1 + op2 + op3;

	return S_OK;
}
STDMETHODIMP CMyMath::Fun93(double op1, double* pResult)	
{
	*pResult = op1 * 2;

	return S_OK;
}

//STDMETHODIMP CMyMath::Add(LONG op1, LONG op2, LONG* pResult)
//{
//	*pResult = op1 + op2;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CMyMath::Subtract(LONG op1, LONG op2, LONG* pResult)
//{
//	*pResult = op1 - op2;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CMyMath::Multiply(LONG op1, LONG op2, LONG* pResult)
//{
//	*pResult = op1 * op2;
//
//	return S_OK;
//}
//
//
//STDMETHODIMP CMyMath::Divide(LONG op1, LONG op2, LONG* pResult)
//{
//	*pResult = op1 / op2;
//
//	return S_OK;
//}
