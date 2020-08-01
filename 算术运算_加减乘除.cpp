#include<iostream>
using namespace std;

int main11() {
	
	int a1 = 10;
	int b1 = 3;
	int A1, B1, a2, b2;
	A1 = 10, B1 = 20, a2 = 10, b2 = 0;
	double A2, B2;
	A2 = 0.5; B2 = 0.22;

	cout << a1 + b1 << endl;
	cout << b1 - a1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个int型相除结果依然是int，将小数部分去除

	cout << A1 / B1 << endl;
	//cout << a2 / b2 << endl;系统无法运算，除数不能为0.
	cout << A2 / B2 << endl;

	system("pause");

	return 0;
}