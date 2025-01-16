#pragma once

typedef struct _Arr
{
	int* pInt;			// 가변 배열의 시작 주소 값
	int iMaxCount;		// 배열의 최대 길이
}Arr;


void Initaiallize(Arr* pArr);	// 배열 초기화

void Release(Arr* pArr);		// 메모리 해제

void Reload(Arr* pArr);			// 배열 길이 설정

int Sum(Arr* pArr);				// 배열의 총 합	

int Avg(Arr* pArr);				// 배열의 평균

void UpSort(Arr* pArr);			// 배열 오름차순 정렬	

void DownSort(Arr* pArr);		// 배열 내림차순 정렬
