//변수 값을 1로 증가시키는 함수, 변수의 부호를 바꾸는 함수 생성

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

	cout << "숫자를 입력하시오: ";
	cin >> num;

	PlusOne(num);
	cout << num << endl;

	ChangeSign(num);
	cout << num << endl;

	return 0;
}