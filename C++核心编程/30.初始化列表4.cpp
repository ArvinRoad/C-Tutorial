#include<iostream>
using namespace std;

class Person08 {
public:
	Person08(int a, int b, int c) {	//传统初始化操作
		m_A = a; m_B = b; m_C = c;
	}
	int m_A,m_B,m_C;
};

class Person09 {	//利用初始化列表
public:
	Person09(int a,int b,int c) :M_A(a), M_B(b), M_C(c) {
		
	}
	int M_A, M_B, M_C;
};

void test13() {
	Person08 P(10,20,30);
	cout << "m_A=" << P.m_A << endl; cout << "m_B=" << P.m_B << endl; cout << "m_C=" << P.m_C << endl;
}
void test14() {
	Person09 P(30,10,20);
	cout << "M_A=" << P.M_A << endl; cout << "M_B=" << P.M_B << endl; cout << "M_C=" << P.M_C << endl;
}

int main30(){
	test13();	//传统
	test14();	//初始化列表
	system("pause");
	return 0;
}