#include "Arr.h"
#include <iostream>


void Initaiallize(Arr* pArr)									// �迭�� �ʱ�ȭ�ϴ� �Լ�
{
	pArr->pInt = (int*)malloc(sizeof(int));
	pArr->iMaxCount = 1;
}

void Release(Arr* pArr)											// �迭�� �����ϴ� �Լ�
{
	free(pArr->pInt);
	pArr->iMaxCount = 1;
}

void Reload(Arr* pArr)											// �迭 ���� ���� �Լ�
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

void UpSort(Arr* pArr)											// �迭�� ������������ �����ϴ� �Լ�		
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

void DownSort(Arr* pArr)										// �迭�� ������������ �����ϴ� �Լ�
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