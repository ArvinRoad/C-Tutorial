#include"swap.h"

int main59() {
	int a = 10, b = 20;
	swap02(a, b);

	system("pause");

	return 0;
}

void swap02(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}