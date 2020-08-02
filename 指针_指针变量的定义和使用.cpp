#include<iostream>
using namespace std;

int main60() {
	int a = 10;	//定义指针，结构：数据类型 * 指针变量名
	int* p;
	p = &a;	//让指针记录变量a的地址，&取址符
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	*p = 1000;	//*代表解引用，找到指针指向内存中的数据
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}