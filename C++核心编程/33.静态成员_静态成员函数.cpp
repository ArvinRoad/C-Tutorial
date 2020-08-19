#include<iostream>
using namespace std;

class Person12 {
public:
	static void func10() {	//静态成员函数
		m_A = 100;	//静态的成员函数是可以访问静态的成员变量，它是共享的
		//m_B = 200;	//报错，静态成员函数不可以访问非静态的成员变量，无法区分到底是哪个对象的m_B属性
		cout << "static void func10()的调用" << endl;
	}
	static int m_A;	//静态成员变量
	int m_B;	//非静态的成员变量
	
private:	//静态成员函数也是有访问权限的
	static void func11() {
		cout << "static void func2()的调用" << endl;
	}
};
int Person12::m_A = 0;	//类内声明，类外初始化

void test17() {
	Person12 P;	//通过对象访问
	P.func10();

	Person12::func10();	//通过类名调用

	//Person12::func10();	//报错，无法访问私有域，类外无法访问私有静态成员函数

}

int main33() {
	test17();
	system("pause");
	return 0;
}