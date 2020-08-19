#include<iostream>
using namespace std;

class Base05 {
public:
	static int M_A;	//静态成员属性
	static void func12() {	//静态成员函数
		cout << "Base - Static void func()的调用！" << endl;
	}
};
int Base05::M_A=100;	//静态成员需要类外初始化

class Son06 :public Base05 {
public:
	static int M_A;
	static void func12() {	//静态成员函数
		cout << "Son - Static void func()的调用！" << endl;
	}
};
int Son06::M_A = 200;

void test46() {
	Son06 s;
	cout << "对象访问:Son::M_A = " << s.M_A << endl;	//子类静态成员属性访问
	cout << "对象访问:Base::M_A = " << s.Base05::M_A << endl;	//父类静态成员属性访问
	cout << "类名访问:Son::M_A = " << Son06::M_A << endl;	//子类静态成员属性访问
	cout << "类名访问:Base::M_A = " << Son06::Base05::M_A << endl;	//父类静态成员属性访问
}
void test47() {
	Son06 s;
	s.func12();	//子类静态成员函数调用
	s.Base05::func12();	//父类静态成员函数调用
	Son06::func12();	//子类类名调用
	Son06::Base05::func12();	//父类类名调用
}

int main54() {
	test46();
	test47();
	system("pause");
	return 0;
}