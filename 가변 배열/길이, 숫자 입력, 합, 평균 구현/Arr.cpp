#include "Arr.h"
#include <iostream>


void Initaiallize(Arr* pArr)									// 배열을 초기화하는 함수
{
	pArr->pInt = (int*)malloc(sizeof(int));
	pArr->iCount = 0;
	pArr->iMaxCount = 1;
}

void PushBack(Arr* pArr, int iData)								// 배열에 숫자를 넣는 함수, 사용할 필요가 없었음.
{
	if (pArr->iCount == pArr->iMaxCount)
	{
		Rellocate(pArr);
	}
	pArr->pInt[pArr->iCount] = iData;
	++pArr->iCount;
}

void Rellocate(Arr* pArr)										// 배열의 길이를 늘리는 함수, 사용할 필요가 없었음.
{
	pArr->iMaxCount *= 2;
	int* pNew = (int*)malloc(pArr->iMaxCount * sizeof(int));
	for (int i = 0; i < pArr->iCount; ++i)
	{
		pNew[i] = pArr->pInt[i];
	}
	free(pArr->pInt);
	pArr->pInt = pNew;
}

void Release(Arr* pArr)											// 배열을 해제하는 함수
{
	free(pArr->pInt);
	pArr->iCount = 0;
	pArr->iMaxCount = 1;
}

void Reload(Arr* pArr)											// 배열을 다시 만드는 함수
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