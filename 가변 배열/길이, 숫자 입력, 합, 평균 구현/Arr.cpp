#include "Arr.h"
#include <iostream>


void Initaiallize(Arr* pArr)									// �迭�� �ʱ�ȭ�ϴ� �Լ�
{
	pArr->pInt = (int*)malloc(sizeof(int));
	pArr->iCount = 0;
	pArr->iMaxCount = 1;
}

void PushBack(Arr* pArr, int iData)								// �迭�� ���ڸ� �ִ� �Լ�, ����� �ʿ䰡 ������.
{
	if (pArr->iCount == pArr->iMaxCount)
	{
		Rellocate(pArr);
	}
	pArr->pInt[pArr->iCount] = iData;
	++pArr->iCount;
}

void Rellocate(Arr* pArr)										// �迭�� ���̸� �ø��� �Լ�, ����� �ʿ䰡 ������.
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

void Release(Arr* pArr)											// �迭�� �����ϴ� �Լ�
{
	free(pArr->pInt);
	pArr->iCount = 0;
	pArr->iMaxCount = 1;
}

void Reload(Arr* pArr)											// �迭�� �ٽ� ����� �Լ�
{
	pArr->pInt = (int*)malloc(pArr->iMaxCount * sizeof(int));
}

int Sum(Arr* pArr)												// �迭�� �� ���� ���ϴ� �Լ�
{
	int iSum = 0;
	for (int i = 0; i < pArr->iMaxCount; ++i)
	{
		iSum += pArr->pInt[i];
	}

	return iSum;
}

int Avg(Arr* pArr)												// �迭�� ����� ���ϴ� �Լ�
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