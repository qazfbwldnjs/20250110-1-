#pragma once

typedef struct _Arr
{
	int* pInt;			// ���� �迭�� ���� �ּ� ��
	int iMaxCount;		// �迭�� �ִ� ����
}Arr;


void Initaiallize(Arr* pArr);	// �迭 �ʱ�ȭ

void Release(Arr* pArr);		// �޸� ����

void Reload(Arr* pArr);			// �迭 ���� ����

int Sum(Arr* pArr);				// �迭�� �� ��	

int Avg(Arr* pArr);				// �迭�� ���

void UpSort(Arr* pArr);			// �迭 �������� ����	

void DownSort(Arr* pArr);		// �迭 �������� ����
