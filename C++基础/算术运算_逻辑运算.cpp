#include<iostream>
using namespace std;

int main16() {

	int a,b,A,B;
	a = 10; b = 10; A = 0; B = 0;

	cout << !a << endl;		//0
	cout << !!a << endl;	//!!取反两次 1

	cout << (a && b) << endl; //结果为真
	cout << (A && b) << endl; //结果为假
	cout << (A && B) << endl;	//结果为假。同真为真，其余为假

	cout << (a || b) << endl;	//结果为真
	cout << (A || b) << endl;	//结果为真
	cout << (A || B) << endl;	//结果为假。	同假为假，其余为真。

	system("pause");

	return 0;
}