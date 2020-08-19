#include<iostream>
using namespace std;
void mySwap01(int a,int b) {	//交换函数，值传递
	int temp = a;a = b;b = temp;
}
void mySwap02(int* a, int* b) {	//交换函数，地址传递
	int temp = *a;*a = *b;*b = temp;
}
void mySwap03(int& a, int& b) {	//引用传递，它的形参也会修饰实参
	int temp = a;a = b;b = temp;
}
int main7() {
	int a = 10, b = 20;
	mySwap01(a, b);	//值传递，形参不会修饰实参
	mySwap02(&a, &b);	//地址传递，形参修饰实参
	mySwap03(a,b);	//引用传递，形参修饰实参

	system("pause");
	return 0;
}