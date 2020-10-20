#include<iostream>
using namespace std;
#include<string>

template<typename NameType,typename AgeType>
class Person10 {
public:
	Person10(NameType name, AgeType age) {
		this->M_Name = name;
		this->M_Age = age;
	}
	void ShowPerson10() {
		cout << "Name :" << this->M_Name <<endl;cout << "Age :" << this->M_Age << endl;
	}
	NameType M_Name;
	AgeType M_Age;
};
/*	指定传入类型 */
void PrintPerson10(Person10<string,int>&p) {
	p.ShowPerson10();
}
void test10() {
	Person10<string, int>p("张三", 18);
	PrintPerson10(p);
}
/* 参数模板化 */
template<typename NameType,typename AgeType>
void PrintPerson10a1(Person10<NameType, AgeType>& p) {
	p.ShowPerson10();
	cout << "NameType的类型为 :" << typeid(NameType).name() << endl;	//查看NameType的类型
	cout << "AgeType的类型为 :" << typeid(AgeType).name() << endl;	//查看AgeType的类型
}
void test10a1() {
	Person10<string, int>p("李四", 25);
	PrintPerson10a1(p);
}
/* 整个类模板化 */
template<typename T>
void PrintPerson10a2(T& p) {
	p.ShowPerson10();
	cout << "T的类型为 :" << typeid(T).name() << endl;
}
void test10a2() {
	Person10<string, int>p("王五", 33);
	PrintPerson10a2(p);
}

int main10() {
	test10();	test10a1();		test10a2();
	system("pause");
	return 0;
}