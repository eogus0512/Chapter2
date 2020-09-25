//각각 포인터가 가르키는 대상을 바꾸는 함수

#include <iostream>
using namespace std;

void SwapPointer(int* (&ptr1), int* (&ptr2))
{
	int* temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	cout << *ptr1 << endl << *ptr2 << endl<<endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl << *ptr2 << endl;
	return 0;
}