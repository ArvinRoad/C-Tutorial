#include<iostream>
using namespace std;

class Base06 {
public:
	Base06() { M_A = 100; }
	int M_A;
};
class Base07 {
public:
	Base07() { M_A = 200; }
	int M_A;
};
class Son07 :public Base06, public Base07 {	//多继承
public:
	Son07() { M_C = 300; M_D = 400; }
	int M_C, M_D;
};

void test48() {
	Son07 s;
	cout << "Size of Son = " << sizeof(s) << endl;	//16bit
	//cout << "M_A = " << s.M_A << endl;	//报错，出现二义性。
	cout << "Base06::M_A=" << s.Base06::M_A << endl;
	cout << "Base07::M_A=" << s.Base07::M_A << endl;
	//cout << "Son07::M_A=" << s.Son07::M_A << endl;	//报错
}

int main55() {
	test48();
	system("pause");
	return 0;
}