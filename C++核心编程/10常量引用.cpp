#include<iostream>
using namespace std;

void showValue(const int &val) {	//打印函数
	//val = 1000;	//const 防止误操作更改a的形参与实参
	cout << "val = " << val << endl;
}

int main10() {
	int a = 10;
	//int& ref = 10;	//代码错误，因为10是一个常量区，引用必须引一块合法的内存空间(以栈或堆上的数据)。
	const int& ref = 10;	//加上const之后，编译器将代码修改int temp = 10;int &ref = temp。引用为临时空间，原名是系统分配，只能获取别名。
	//ret = 20;	//代码错误，加入const之后变为可读状态不可以修改数据。
	int a2 = 100;
	cout << "a2 = " << a2 << endl;
	showValue(a2);

	system("pause");
	return 0;
}