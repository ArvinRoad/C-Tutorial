#include<iostream>
using namespace std;
#include<string>

template<typename NameType,typename AgeType>
class Person12 {
public:
	Person12(NameType name, AgeType age);
	void ShowPerson();
	NameType m_Name;
	AgeType m_Age;
};
/*构造函数类外实现*/
template<class NameType,class AgeType>
Person12<NameType,AgeType>::Person12(NameType name, AgeType age) {
	this->m_Name = name;
	this->m_Age = age;
}
/*成员函数的类外实现*/
template<class NameType,class AgeType>
void Person12<NameType, AgeType>::ShowPerson() {
	cout << "Name :" << this->m_Name << endl;cout << "Age :" << this->m_Age << endl;
};
void test12() {
	Person12<string, int>p("Tom", 20);
	p.ShowPerson();
}

int main12() {
	test12();
	system("pause");
	return 0;
}