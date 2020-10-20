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
/*	ָ���������� */
void PrintPerson10(Person10<string,int>&p) {
	p.ShowPerson10();
}
void test10() {
	Person10<string, int>p("����", 18);
	PrintPerson10(p);
}
/* ����ģ�廯 */
template<typename NameType,typename AgeType>
void PrintPerson10a1(Person10<NameType, AgeType>& p) {
	p.ShowPerson10();
	cout << "NameType������Ϊ :" << typeid(NameType).name() << endl;	//�鿴NameType������
	cout << "AgeType������Ϊ :" << typeid(AgeType).name() << endl;	//�鿴AgeType������
}
void test10a1() {
	Person10<string, int>p("����", 25);
	PrintPerson10a1(p);
}
/* ������ģ�廯 */
template<typename T>
void PrintPerson10a2(T& p) {
	p.ShowPerson10();
	cout << "T������Ϊ :" << typeid(T).name() << endl;
}
void test10a2() {
	Person10<string, int>p("����", 33);
	PrintPerson10a2(p);
}

int main10() {
	test10();	test10a1();		test10a2();
	system("pause");
	return 0;
}