#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2)
{
	int temp;
	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	SwapByRef2(num1, num2);

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}