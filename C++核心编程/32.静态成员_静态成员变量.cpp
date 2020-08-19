#include<iostream>
using namespace std;

class Person11 {
public:
	static int m_A;	//静态成员变量
private:
	static int m_B;	//静态成员变量也是有访问权限的
};
int Person11::m_A = 10;	//类内声明，类外初始化
int Person11::m_B = 10;

void test16() {
	Person11 P;	//通过对象访问
	P.m_A = 100;
	cout << "P.m_A = " << P.m_A << endl;
	Person11 P2;
	P2.m_A = 200;
	cout << "P.m_A = " << P.m_A << endl;	//共享同一份数据
	cout << "P2.m_A = " << P2.m_A << endl;

	cout << "M_B = " << Person11::m_A << endl;	//通过类名访问
}

int main32() {
	test16();
	system("pause");
	return 0;
}