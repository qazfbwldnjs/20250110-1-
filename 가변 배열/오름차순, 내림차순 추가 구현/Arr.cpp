#include "Arr.h"
#include <iostream>


void Initaiallize(Arr* pArr)									// 배열을 초기화하는 함수
{
	pArr->pInt = (int*)malloc(sizeof(int));
	pArr->iMaxCount = 1;
}

void Release(Arr* pArr)											// 배열을 해제하는 함수
{
	free(pArr->pInt);
	pArr->iMaxCount = 1;
}

void Reload(Arr* pArr)											// 배열 길이 설정 함수
{
	pArr->pInt = (int*)malloc(pArr->iMaxCount * sizeof(int));
}

int Sum(Arr* pArr)												// 배열의 총 합을 구하는 함수
{
	int iSum = 0;
	for (int i = 0; i < pArr->iMaxCount; ++i)
	{
		iSum += pArr->pInt[i];
	}

	return iSum;
}

int Avg(Arr* pArr)												// 배열의 평균을 구하는 함수
{
	int iSum = 0;
	int iAvg = 0;

	for (int i = 0; i < pArr->iMaxCount; ++i)
	{
		iSum += pArr->pInt[i];
	}

	iAvg = iSum / pArr->iMaxCount;

	return iAvg;
}

void UpSort(Arr* pArr)											// 배열을 오름차순으로 정렬하는 함수		
{
	if (pArr->iMaxCount <= 1)
	{
		return;
	}

	while (true)
	{
		bool bSwap = true;

		for (int i = 0; i < pArr->iMaxCount - 1; ++i)
		{
			int iTemp;

			if (pArr->pInt[i] > pArr->pInt[i + 1])
			{
				iTemp = pArr->pInt[i];
				pArr->pInt[i] = pArr->pInt[i + 1];
				pArr->pInt[i + 1] = iTemp;

				bSwap = false;
			}
		}

		if (bSwap == true)
		{
			break;
		}
	}
}

void DownSort(Arr* pArr)										// 배열을 내림차순으로 정렬하는 함수
{
	if (pArr->iMaxCount <= 1)
	{
		return;
	}

	while (true)
	{
		bool bSwap = true;

		for (int i = 0; i < pArr->iMaxCount - 1; ++i)
		{
			int iTemp;

			if (pArr->pInt[i] < pArr->pInt[i + 1])
			{
				iTemp = pArr->pInt[i + 1];
				pArr->pInt[i + 1] = pArr->pInt[i];
				pArr->pInt[i] = iTemp;

				bSwap = false;
			}
		}

		if (bSwap == true)
		{
			break;
		}
	}
}