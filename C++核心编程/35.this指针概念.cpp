#include<iostream>
using namespace std;

class Person14 {
public:
	Person14(int age){
		this->age = age;	//this指针指向的是被调用的成员函数所属的对象
	}

	Person14& Person14AddAge(Person14 &P) {
		this->age += P.age;
		return *this;
	}
	int age;
};

void test19() {	//解决名称冲突
	Person14 P1(18);
	cout << "m_AGE为：" << P1.age << endl;
}
void test20() {	//返回对象本身 用*this
	Person14 P2(10);
	Person14 P3(10);
	P3.Person14AddAge(P2).Person14AddAge(P2).Person14AddAge(P2);	//链式编程思想
	cout << "P3的AGE为：" << P3.age << endl;
}

int main35() {
	test19();
	test20();	//结果20
	system("pause");
	return 0;
}