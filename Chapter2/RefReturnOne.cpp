#include <iostream>
using namespace std;

int& RefRetFunction(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int& num2 = RefRetFunction(num1);

	num1++;
	num2++;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}