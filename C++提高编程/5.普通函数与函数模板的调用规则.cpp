#include<iostream>
using namespace std;
void myPrint5(int a, int b) { cout << "������ͨ����" << endl; }	//ֻ������û��ʵ�ֲ��ԣ�����
template<typename T>
void myPrint5(T a, T b) { cout << "���ú���ģ��" << endl; }
void test5() { int a = 10, b = 20;myPrint5(a, b); }	//�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
void test5a1() { int a = 10, b = 20;myPrint5<>(a, b); }	//ͨ����ģ�壬ǿ�Ƶ��ú���ģ��
template<typename T>
void myPrint5(T a, T b, T c) { cout << "���ú���ģ��(����)" << endl; }
void test5a2() { int a = 10, b = 20;myPrint5<>(a, b, 100); }
void test5a3() { char c1 = 'a', c2 = 'b';myPrint5(c1, c2); }	//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

int main5() {
	test5();
	test5a1();
	test5a2();
	test5a3();
	system("pause");
	return 0;
}