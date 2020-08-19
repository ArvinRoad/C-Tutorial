#include<iostream>
using namespace std;

int& test03() {	//用引用的方式进行返回
	int a = 10;	//特点：存放在四区中的栈区
	return a;	//返回a的引用，a的变量作为返回值
}

int& test04() {	//函数的调用可以作为左值
	static int a = 10;	//静态变量，存放在全局区，程序结束后由系统自动释放
	return a;
}

int main8() {
	//int &ref = test03();	//用引用的方式返回局部变量
	//cout << "ref = " << ref << endl;	//错误代码，因为a的内存已经被释放，属于非法操作
	int& ref = test04();
	cout << "ref = " << ref << endl;	//函数的调用可以作为左值：等号的左边即为左值
	test04() = 1000;	//相当于赋值1000给a,原名赋值为1000，再用别名去访问这块内存
	cout << "ref = " << ref << endl;
	system("pause");
	return 0;
}