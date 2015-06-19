// GrafCtl.cpp : Implementation of CGrafCtl
#include "stdafx.h"
#include "GrafCtl.h"
#include <Math.h>


// CGrafCtl


STDMETHODIMP CGrafCtl::get_Click(SHORT* pVal)
{
	*pVal = m_nClick;
	return S_OK;
}
 

STDMETHODIMP CGrafCtl::put_Click(SHORT newVal)
{
	if (newVal >1)
	{
		return Error(_T("График уже показан."));
	}
	else if (newVal <0)
	{
		return Error(_T("График уже спрятан."));
	}
	else
	{
		FireViewChange();
		m_nClick = newVal;
	}

	return S_OK;
}

//

STDMETHODIMP CGrafCtl::get_xMin(DOUBLE* pVal)
{
	*pVal = xMin;
	return S_OK;
}


STDMETHODIMP CGrafCtl::put_xMin(DOUBLE newVal)
{
	xMin = newVal;
	return S_OK;
}


STDMETHODIMP CGrafCtl::get_xMax(DOUBLE* pVal)
{
	*pVal = xMax;
	return S_OK;
}


STDMETHODIMP CGrafCtl::put_xMax(DOUBLE newVal)
{
	xMax = newVal;
	return S_OK;
}


STDMETHODIMP CGrafCtl::get_yMin(DOUBLE* pVal)
{
	*pVal = yMin;
	return S_OK;
}


STDMETHODIMP CGrafCtl::put_yMin(DOUBLE newVal)
{
	yMin = newVal;
	return S_OK;
}


STDMETHODIMP CGrafCtl::get_yMax(DOUBLE* pVal)
{
	*pVal = yMax;
	return S_OK;
}


STDMETHODIMP CGrafCtl::put_yMax(DOUBLE newVal)
{
	yMax = newVal;
	return S_OK;
}

//нажата левая кнопка мыши
LRESULT CGrafCtl::OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
{
	//short  nClick=0;
	get_Click(&m_nClick);
	put_Click(m_nClick+1);
	WORD xPos = LOWORD(lParam);  // horizontal position of cursor
	WORD yPos = HIWORD(lParam);  // vertical position of cursor
//событие - нажата клавиша мыши передаем значения, чтобы отрисовалась область
	Fire_Click(xPos, yPos);
	return 0;
}

//нажата правая кнопка мыши
LRESULT CGrafCtl::OnRButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
{
	//short  nClick=0;
	get_Click(&m_nClick);
	put_Click(m_nClick-1);
	WORD xPos = LOWORD(lParam);  // horizontal position of cursor
	WORD yPos = HIWORD(lParam);  // vertical position of cursor

	Fire_Click(xPos, yPos);
	return 0;
}
