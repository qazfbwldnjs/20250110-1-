#include <iostream>
using namespace std;


int arrSize = 0;
int iArr[10];
int i = 0;

int ArrLen()
{
	cout << "배열의 길이를 정하세요. : ";
	cin >> arrSize;										// 배열의 크기 정하기

	return iArr[arrSize];
}

int ArrCpnt()
{
	for (i = 0; i < arrSize; i++)
	{
		cout << i + 1 << "번째 숫자를 입력하세요. : ";	// 배열의 숫자 정하기
		cin >> iArr[i];
	}
	return iArr[i];
}

int ArrSum()
{
	int iSum = 0;
	for (i = 0; i < arrSize; i++)
	{
		iSum += iArr[i];								// 배열의 합 구하기
	}
	return iSum;
}

int ArrAvg()
{
	float iAvg = 0.f;
	iAvg = ArrSum() / i;								// 배열의 평균 구하기
	return iAvg;
}

int main()
{
	ArrLen();
	ArrCpnt();

	cout << "배열의 총 합은 : " << ArrSum() << endl;
	cout << "배열의 평균은 : " << ArrAvg() << endl;
}