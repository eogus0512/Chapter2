//const 포인터와 const 참조자

#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&ref) = ptr;

	cout << "포인터 사용: " << *ptr << endl;
	cout << "참조자 사용: " << *ref << endl;

	return 0;
}