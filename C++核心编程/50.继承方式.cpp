#include<iostream>
using namespace std;

class Base01 {	//父类
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base01 {	//公共继承
public:
	void func11() {
		m_A = 10;	//继承，父类公共权限成员在子类依然是公共权限
		m_B = 10;	//继承，父类保护权限成员在子类依然是保护权限
		//m_C = 10;	//父类中私有权限成员在子类无法继承
	}
};
class Son02 :protected Base01 {
	void func12() {
		m_A = 100;	//继承，父类公共权限成员在子类成为保护权限
		m_B = 100;	//继承，父类保护权限成员在子类依然是保护权限
		//m_C = 100;	//父类中私有权限成员在子类无法继承
	}
};
class Son03 :private Base01 {
	void func13() {
		m_A = 100;	//继承，父类公共权限成员在子类成为私有权限
		m_B = 100;	//继承，父类保护权限成员在子类成为私有权限
		//m_C = 100;	//父类中私有权限成员在子类无法继承
	}
};
void test39() {
	Son s1;
	s1.m_A = 100;
	//s1.m_B = 100;	//保护权限，到了son中m_B是保护权限，类外访问不到
}
void test40() {
	Son02 s1;
	//s1.m_A = 100;	//保护权限，到了son中m_B是保护权限，类外访问不到
}
void test41() {

}

int main50() {
	system("pause");
	return 0;
}