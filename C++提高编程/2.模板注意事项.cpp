#include<iostream>
using namespace std;

template<class T>
void mySwap2(T& a, T& b) { T temp = a;a = b;b = temp; }
void test2() { int a = 10, b = 20;mySwap2(a, b);cout << "a=" << a << " b=" << b << endl; }	//��ȷ
//void test2() { int a = 10;char b = 'b';mySwap2(a, b);cout << "a=" << a << " b=" << b << endl; }	//�����Զ��Ƶ�����Ҫһ��
template<class T>
void func2() { cout << "func �ĵ���" << endl; }
void test2a1() { func2<int>(); }	//����,ֻ��<int>��ʾָ�������޸�

int main2() {
	test2();
	test2a1();
	system("pause");
	return 0;
}