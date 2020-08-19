#include<iostream>
using namespace std;

class Person06{
public:
	Person06() { cout << "Person的默认构造函数调用！" << endl; }
	Person06(int age) { cout << "Person的有参函数调用！" << endl; m_Age = age; }
	//Person06(const Person06& p) { cout << "Person的拷贝构造函数调用！" << endl; m_Age = p.m_Age; }
	~Person06() { cout << "Person的析构函数调用！" << endl; }
	int m_Age;
};

void test10() {	//默认拷贝构造函数，对属性进行值拷贝
	Person06 p;//系统报错，C++没有提供默认构造函数但这个方法体是调用默认构造所以报错
	p.m_Age = 18;
	Person06 p2(p);
	cout << "P2的AGE为：" << p2.m_Age << endl;
}
void test11() {	//如果用户定义有参构造函数，C++不再提供默认无参构造，但会提供默认拷贝构造
	//Person06 P;	//系统报错，C++没有提供默认构造函数但这个方法体是调用默认构造所以报错
	Person06 P(28);
	Person06 P2(P);
	cout << "P2的AGE为：" << P2.m_Age << endl;
}
//	*如果用户定义拷贝构造函数，C++不会提供其他构造函数
int main28() {
	//test10();
	test11();
	system("pause");
	return 0;
}