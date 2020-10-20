#include<iostream>
using namespace std;
#include<string>

template<typename NameType,typename AgeType>
class Person14 {	//通过全局函数进行打印
	friend void PrintPerson(Person14<NameType,AgeType> p) {	//全局函数类内实现
		cout << "Name: " << p.M_Name << endl;cout << "Age: " << p.M_Age << endl;
	}
public:
	Person14(NameType name, AgeType age) {
		this->M_Name = name;
		this->M_Age = age;
	}
private:
	NameType M_Name;
	AgeType M_Age;
};
void test14() {	//全局函数类内实现
	Person14<string, int>p("Tom", 22);
	PrintPerson(p);
}
int main14(){
	test14();
	system("pause");
	return 0;
}