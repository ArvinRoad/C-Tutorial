#include<iostream>
using namespace std;

class Person16 {
public:
	//成员函数后加const后不可以修改成员属性。this指针的本质：是指针常量，指针的指向是不可以修改的
	//const Person * const this;
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson()const{	//常函数
		//this->m_A = 100;	//报错，const设定不可修改this指针的指向的值。
		//this = NULL;	//报错，this指针不可以修改指针的指向
		this->m_B = 100;
	}
	int m_A;
	mutable int m_B;	//特殊变量，即使在常函数中也可以去修改这个值,加上关键字mutable
};

void test22() {
	Person16 P;
	P.showPerson();
}
void test23() {
	const Person16 P;	//在对象前加一个const变为常对象。
	//P.m_A = 100;	//报错，常对象不可以修改this的指针指向
	P.m_B = 100;	//正常运行，特殊变量。修改值前加上关键字mutable
	P.showPerson();	//常对象只能调用常函数
	//p.func();	//报错，常对象不能调用其他函数，因为普通成员函数可以修改属性。
}
void func10() {

}

int main37() {
	system("pause");
	return 0;
}