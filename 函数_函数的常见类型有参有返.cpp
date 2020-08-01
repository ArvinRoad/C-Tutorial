#include<iostream>
using namespace std;

int test04(int a) {
	cout << "this is test04 a = " << a << endl;
	return a;
}

int main57() {	//ÓĞ²ÎÓĞ·µ
	int num1 = test04(10000);
	cout << "num1 = " << num1 << endl;

	system("pause");

	return 0;
}