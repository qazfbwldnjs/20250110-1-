#pragma once

typedef struct _Arr
{
	int* pInt;			// ���� �迭�� ���� �ּ� ��
	int iCount;			// ���� �迭�� ����ִ� ���� ��
	int iMaxCount;		// �迭�� �ִ� ����
}Arr;


void Initaiallize(Arr* pArr);

void PushBack(Arr* pArr, int iData);

void Rellocate(Arr* pArr);

void Release(Arr* pArr);

void Reload(Arr* pArr);

int Sum(Arr* pArr);

int Avg(Arr* pArr);
