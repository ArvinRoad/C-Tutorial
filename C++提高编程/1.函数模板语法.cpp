#include<iostream>
using namespace std;

void swapInt(int &a,int &b) {	//普通整型数值交换函数(&交换本体)
	int temp = a;a = b;b = temp;
}
void swapDouble(double& a, double& b) {	//普通浮点数值交换函数(&交换本体)
	double temp = a;a = b;b = temp;
}

template<typename T> //声明一个模板，告诉编译器后面代码中T不要报错(通用数据类型)
void mySwap(T& a, T& b) {	//全类型数值交换函数
	T temp = a;a = b;b = temp;
}

void test1() {	//实现类
	int a = 10, b = 20;swapInt(a, b);cout << "a = " << a << " b=" << b << endl;
	double c = 1.1, d = 2.2;swapDouble(c, d);cout << "c = " << c << " d=" << d << endl;
	//两种方式使用函数模板
	int a1 = 10, b1 = 20;
	mySwap(a1, b1);	//1.自动类型推导
	swapInt(a1, b1);cout << "a1= " << a1 << " b1=" << b1 << endl;
	int a2 = 10, b2 = 20;
	mySwap<int>(a2, b2);	//2.显示指定类型
	swapInt(a2, b2);cout << "a1= " << a2 << " b1=" << b2 << endl;
}

int main1() {
	test1();
	system("pause");
	return 0;
}