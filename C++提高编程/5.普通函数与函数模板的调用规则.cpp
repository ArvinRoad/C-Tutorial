#include<iostream>
using namespace std;
void myPrint5(int a, int b) { cout << "调用普通函数" << endl; }	//只有声明没有实现测试，报错
template<typename T>
void myPrint5(T a, T b) { cout << "调用函数模板" << endl; }
void test5() { int a = 10, b = 20;myPrint5(a, b); }	//如果函数模板和普通函数都可以实现，优先调用普通函数
void test5a1() { int a = 10, b = 20;myPrint5<>(a, b); }	//通过空模板，强制调用函数模板
template<typename T>
void myPrint5(T a, T b, T c) { cout << "调用函数模板(重载)" << endl; }
void test5a2() { int a = 10, b = 20;myPrint5<>(a, b, 100); }
void test5a3() { char c1 = 'a', c2 = 'b';myPrint5(c1, c2); }	//如果函数模板可以产生更好的匹配，优先调用函数模板

int main5() {
	test5();
	test5a1();
	test5a2();
	test5a3();
	system("pause");
	return 0;
}