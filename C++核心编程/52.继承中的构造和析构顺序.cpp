#include<iostream>
using namespace std;

class Base03 {
public:
	Base03() {	//Base的构造函数
		cout << "Base的构造函数调用！" << endl;
	}
	~Base03(){	//Base的析构函数
		cout << "Base的析构函数调用！" << endl;
	}
};
class Son04 :public Base03 {
public:
	Son04() {	//Base的构造函数
		cout << "Son的构造函数调用！" << endl;
	}
	~Son04() {	//Base的析构函数
		cout << "Son的析构函数调用！" << endl;
	}
};

void test43() {
	//Base03 b;
	Son04 p;
}

int main52() {
	test43();
	system("pause");
	return 0;
}