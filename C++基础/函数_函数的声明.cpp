#include<iostream>
using namespace std;

int max(int a, int b);	//函数的提前声明

int main58() {	
	int a = 10, b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}
//定义函数
int max(int a, int b) {	//比较函数，实现两个整数进行比较，返回较大的值
	return a > b ? a : b;
}
