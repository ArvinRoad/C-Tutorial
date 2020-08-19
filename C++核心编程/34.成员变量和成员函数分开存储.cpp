#include<iostream>
using namespace std;

class Person13 {
	int m_A;	//非静态变量，属于类的对象上
	static int m_B;	//静态变量，不属于类对象上
	void func10() {}	//非静态成员函数，不属于类对象上
	static void func11() {}	//静态成员函数，不属于类对象上
};
int Person13::m_B = 0;

void test18(){
	Person13 P;
	/*
			空类为1字节，C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
			加int m_A，为4个字节。属于类的对象上
			加上static int m_B;也为4个字节，因为静态变量不属于类对象上
	*/
	cout << "Person占内存空间为：" << sizeof(P) << endl;

}

int main34() {
	test18();
	system("pause");
	return 0;
}