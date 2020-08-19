#include<iostream>
using namespace std;

void swap(int num1,int num2) {	//实现两个数字进行交换的函数
	cout << "交换前：" << endl; cout << "num1 = " << num1 << endl; cout << "num2 = " << num2 << endl;
	int temp = num1;num1 = num2;num2 = temp;
	cout << "交换后：" << endl; cout << "num1 = " << num1 << endl; cout << "num2 = " << num2 << endl;
	//return;返回值不需要时可以不写
}

int main53() {
	int a = 10, b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}