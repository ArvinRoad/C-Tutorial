#include<iostream>
using namespace std;

class Person {	//人类，public权限：成员类内可以访问，类外也可以访问
public:	//公共权限
	string name;
protected:	//保护权限
	string m_Car;	//汽车
private:	//私有权限
	int m_Password;	//银行卡密码
public:	//类内访问，函数写成保护或私有权限，在类外无法访问
	void func10() {
		name = "张三";
		m_Car = "保时捷";
		m_Password = 652456;
	}
};

int main19() {
	Person p1;
	p1.name = "张小三";
	//p1.m_Car;	//保护权限不可以在类外访问
	//p1.m_Password = 123456;	//私有权限不可以在类外访问
	system("pause");
	return 0;
}