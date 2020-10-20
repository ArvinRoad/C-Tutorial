#include<iostream>
using namespace std;

template<typename NameType, typename AgeType>
class Person14a1;	//提前让编译器知道Person14a1的存在
//全局函数在类外实现,实现让编译器提前看见
template<typename NameType, typename AgeType>
void PrintPerson14(Person14a1<NameType, AgeType>p) {
	cout << "Name: " << p.M_Name << endl;cout << "Age: " << p.M_Age << endl;
}

template<typename NameType,typename AgeType>
class Person14a1 {
	friend void PrintPerson14<>(Person14a1<NameType,AgeType>p);	//加空模板参数列表，如果全局函数是类外实现，需要让编译器提前知道这个函数存在
public:
	Person14a1(NameType name,AgeType age){
		this->M_Name = name;
		this->M_Age = age;
	}
private:
	NameType M_Name;
	AgeType M_Age;
};
void test14a1() {
	Person14a1<string, int>p("Tom", 22);
	PrintPerson14(p);
}
int main14a1() {
	test14a1();
	system("pause");
	return 0;
}