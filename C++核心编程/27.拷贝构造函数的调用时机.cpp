#include<iostream>
using namespace std;

class Person05 {
public:
	Person05() { cout << "Person的默认构造函数" << endl; }
	Person05(int age) { m_age = age; cout << "Person的有参构造函数" << endl; }
	Person05(const Person05& p) { m_age = p.m_age; cout << "Person的拷贝构造函数" << endl; }
	~Person05() { cout << "Person的析构函数" << endl; }
	int m_age;
};
void test07() { Person05 p1(20); Person05 p2(p1); cout << "P2的年龄：" << p2.m_age << endl; }	//使用一个已经创建完的对象来初始化一个对象

void doWork(Person05 p) {}
void test08() { Person05 p; doWork(p); }	//值传递的方式给一个函数参数传值，实参传给形参时候，它调用了拷贝函数。

Person05 doWork02() { Person05 p1; cout << (int*)&p1 << endl; return p1; }
void test09() { Person05 p = doWork02(); cout << (int*)&p << endl; }	//以值方式返回局部对象,P1和P不是同一个对象

int main27() {
	test07();
	test08();
	test09();
	system("pause");
	return 0;
}