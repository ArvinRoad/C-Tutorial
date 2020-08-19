#include<iostream>
using namespace std;

int* func01(int b) {	//形参数据也会放在栈区
	b = 100;
	int a = 10;//局部变量,存放在栈区，栈区的数据在函数执行完成后自动释放
	return &a;	//返回局部变量的地址(不要返回局部变量地址)
}

int main2() {
	int* p = func01(1);	//接收func函数的返回值
	cout << *p << endl;	//第一次可以打印正确的数值，是因为编译器做了保留
	cout << *p << endl;	//第二次这个数据就不再保留了，所以千万不要返回局部变量的地址。这个属于非法操作
	system("pause");
	return 0;
}