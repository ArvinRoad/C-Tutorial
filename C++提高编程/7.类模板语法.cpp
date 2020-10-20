#include<iostream>
using namespace std;
#include<string>

template<class NameType,class AgeType>
class Person7 { 
public:
	Person7(NameType name,AgeType age) {
		this->M_name = name;
		this->M_age = age;
	}
	void ShowPerson7() {
		cout << "name:" << this->M_name << endl;
		cout << "Age:" << this->M_age << endl;
	}
	NameType M_name;
	AgeType M_age;
};

void test7() {
	Person7<string, int>p1("ËïÎò¿Õ", 999);
	p1.ShowPerson7();
}

int main7(){
	test7();
	system("pause");
	return 0;
}