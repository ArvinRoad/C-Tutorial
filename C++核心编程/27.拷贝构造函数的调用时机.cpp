#include<iostream>
using namespace std;

class Person05 {
public:
	Person05() { cout << "Person��Ĭ�Ϲ��캯��" << endl; }
	Person05(int age) { m_age = age; cout << "Person���вι��캯��" << endl; }
	Person05(const Person05& p) { m_age = p.m_age; cout << "Person�Ŀ������캯��" << endl; }
	~Person05() { cout << "Person����������" << endl; }
	int m_age;
};
void test07() { Person05 p1(20); Person05 p2(p1); cout << "P2�����䣺" << p2.m_age << endl; }	//ʹ��һ���Ѿ�������Ķ�������ʼ��һ������

void doWork(Person05 p) {}
void test08() { Person05 p; doWork(p); }	//ֵ���ݵķ�ʽ��һ������������ֵ��ʵ�δ����β�ʱ���������˿���������

Person05 doWork02() { Person05 p1; cout << (int*)&p1 << endl; return p1; }
void test09() { Person05 p = doWork02(); cout << (int*)&p << endl; }	//��ֵ��ʽ���ؾֲ�����,P1��P����ͬһ������

int main27() {
	test07();
	test08();
	test09();
	system("pause");
	return 0;
}