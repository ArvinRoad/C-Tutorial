#include<iostream>
using namespace std;

template<class T>
void mySwap2(T& a, T& b) { T temp = a;a = b;b = temp; }
void test2() { int a = 10, b = 20;mySwap2(a, b);cout << "a=" << a << " b=" << b << endl; }	//正确
//void test2() { int a = 10;char b = 'b';mySwap2(a, b);cout << "a=" << a << " b=" << b << endl; }	//错误，自动推导类型要一致
template<class T>
void func2() { cout << "func 的调用" << endl; }
void test2a1() { func2<int>(); }	//错误,只能<int>显示指定类型修复

int main2() {
	test2();
	test2a1();
	system("pause");
	return 0;
}