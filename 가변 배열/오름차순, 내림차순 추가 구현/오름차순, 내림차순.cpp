#include <iostream>
#include "Arr.h"
using namespace std;

int main()
{
	Arr s = {};

	Initaiallize(&s);

	cout << "�迭�� ���̸� ���ϼ���. : ";
	cin >> s.iMaxCount;

	Reload(&s);

	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << i + 1 << " ��° ���ڸ� �Է��ϼ���. : ";
		cin >> s.pInt[i];
	}

	cout << "�迭 : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	cout << "�迭�� �� ���� : " << Sum(&s) << endl;
	cout << "�迭�� ����� : " << Avg(&s) << endl;

	UpSort(&s);
	cout << "�迭�� �������� : ";
	cout << "�迭 : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	DownSort(&s);
	cout << "�迭�� �������� : [";
	for (int i = 0; i < s.iMaxCount; ++i)
	{
		cout << s.pInt[i] << " ";
	}
	cout << "]" << endl;

	Release(&s);

	return 0;
}