#include <iostream>
#include "Arr.h"
using namespace std;

int main()
{
	Arr s = {};

	Initaiallize(&s);

	cout << "배열의 길이를 정하세요. : ";
	cin >> s.iMaxCount;

	Reload(&s);

	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << i + 1 << " 번째 숫자를 입력하세요. : ";
		cin >> s.pInt[i];
	}

	cout << "배열 : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	cout << "배열의 총 합은 : " << Sum(&s) << endl;
	cout << "배열의 평균은 : " << Avg(&s) << endl;

	UpSort(&s);
	cout << "배열의 오름차순 : ";
	cout << "배열 : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	DownSort(&s);
	cout << "배열의 내림차순 : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	Release(&s);

	return 0;
}