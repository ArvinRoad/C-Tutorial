#include<iostream>
using namespace std;
#include<string>

template<class NameType,class AgeType = int>	//类模板在模板参数列表中可以有默认参数：默认=int类型
class Person8 {
public:
	Person8(NameType name, AgeType age) {
		this->M_name = name;
		this->M_age = age;
	}
	void ShowPerson() {
		cout << "name:" << this->M_name << "age:" << this->M_age << endl;
	}
	NameType M_name;
	AgeType M_age;
};
void test8() {	//类模板没有自动类型推导使用方式
	//Person8 p("孙悟空", 1000); //报错，无法自动类型推导
	Person8<string, int> p("孙悟空", 1000);	//正确写法，只能用显示指定类型方式
	p.ShowPerson();
}
void test8a1() {	//类模板在模板参数列表中可以有默认参数
	Person8<string> d("猪八戒", 1000);
	d.ShowPerson();
}

int main8() {
	test8();
	system("pause");
	return 0;
}