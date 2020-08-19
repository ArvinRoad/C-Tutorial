#include<iostream>
using namespace std;
#include<string>

class Phone {	//先调用这个
public:
	Phone(string PPname) {
		M_Pname = PPname;
	}
	~Phone(){	//后析构这个
		cout << "Phone的析构函数调用" << endl;
	}
	string M_Pname;
};
class Person10 {	//后调用这个
public:
	Person10(string name,string Pname):M_Name(name),M_Phone(Pname) {
		
	}
	~Person10(){	//先析构这个
		cout << "Person的析构函数调用" << endl;
	}
	string M_Name;
	Phone M_Phone;	//类对象:M_Phone = PPname	//相当于隐式转换法
};

void test15() {
	Person10 P("张三","苹果MAX");
	cout << P.M_Name << "购买了" << P.M_Phone.M_Pname << "手机！" << endl;
}

int main31() {
	test15();
	system("pause");
	return 0;
}