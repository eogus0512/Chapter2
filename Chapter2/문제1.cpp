//���� ���� 1�� ������Ű�� �Լ�, ������ ��ȣ�� �ٲٴ� �Լ� ����

#include <iostream>
using namespace std;

void PlusOne(int& num)
{
	num++;
}

void ChangeSign(int& num)
{
	num = -num;
}

int main(void)
{
	int num;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> num;

	PlusOne(num);
	cout << num << endl;

	ChangeSign(num);
	cout << num << endl;

	return 0;
}