#include<iostream>
using namespace std;

class Base03 {
public:
	Base03() {	//Base�Ĺ��캯��
		cout << "Base�Ĺ��캯�����ã�" << endl;
	}
	~Base03(){	//Base����������
		cout << "Base�������������ã�" << endl;
	}
};
class Son04 :public Base03 {
public:
	Son04() {	//Base�Ĺ��캯��
		cout << "Son�Ĺ��캯�����ã�" << endl;
	}
	~Son04() {	//Base����������
		cout << "Son�������������ã�" << endl;
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