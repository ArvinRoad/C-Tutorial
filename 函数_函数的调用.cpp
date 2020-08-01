#include<iostream>
using namespace std;

int add2(int num1, int num2) {	//定义一个加法函数
	int sum = num1 + num2;
	return sum;
}

int main52() {	//调用add函数
	int a = 10, b = 20;
	int c = add2(a, b);	//函数调用语法
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}