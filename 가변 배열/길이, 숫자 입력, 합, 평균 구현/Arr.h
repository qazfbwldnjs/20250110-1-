#pragma once

typedef struct _Arr
{
	int* pInt;			// 가변 배열의 시작 주소 값
	int iCount;			// 현재 배열에 들어있는 숫자 수
	int iMaxCount;		// 배열의 최대 길이
}Arr;


void Initaiallize(Arr* pArr);

void PushBack(Arr* pArr, int iData);

void Rellocate(Arr* pArr);

void Release(Arr* pArr);

void Reload(Arr* pArr);

int Sum(Arr* pArr);

int Avg(Arr* pArr);
