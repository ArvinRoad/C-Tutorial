#include<iostream>
using namespace std;

int main6() {
	int a = 10;
	int& b = a;
	//int& c;	//错误代码，引用必须初始化
	int c = 20;
	c = b;	//这是赋值操作，不是引用
	//int& b = c;	//错误代码，引用初始化后不可以改变
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}