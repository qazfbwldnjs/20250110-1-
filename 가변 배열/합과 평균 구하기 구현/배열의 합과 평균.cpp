#include <iostream>
using namespace std;


int arrSize = 0;
int iArr[10];											// �迭�� �ִ� ũ�� ����
int i = 0;

int ArrLen()
{
	cout << "�迭�� ���̸� ���ϼ���. : ";
	cin >> arrSize;										// �迭�� ũ�� ���ϱ�

	return iArr[arrSize];
}

int ArrCpnt()
{
	for (i = 0; i < arrSize; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է��ϼ���. : ";	// �迭�� ���� ���� ���ϱ�
		cin >> iArr[i];
	}
	return iArr[i];
}

int ArrSum()
{
	int iSum = 0;
	for (i = 0; i < arrSize; i++)
	{
		iSum += iArr[i];								// �迭�� �� ���ϱ�
	}
	return iSum;
}

int ArrAvg()
{
	float iAvg = 0.f;
	iAvg = ArrSum() / i;								// �迭�� ��� ���ϱ�
	return iAvg;
}

int main()
{
	ArrLen();											// �迭�� ���� �Է�
	ArrCpnt();											// �迭 ���� �Է�

	cout << "�迭�� �� ���� : " << ArrSum() << endl;		// �迭�� �� �� ���
	cout << "�迭�� ����� : " << ArrAvg() << endl;		// �迭�� ��� ���
}