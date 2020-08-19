#include<iostream>
using namespace std;

int g_a = 10, g_b = 10;	//全局变量
const int c_a = 10,c_b=10;	//const修饰的全局变量，全局常量

int main1() {
	int a = 10,b=10;	//普通的局部变量，函数体内的变量都为局部变量
	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;
	cout << "全局变量a的地址为：" << (int)&g_a << endl;
	cout << "全局变量b的地址为：" << (int)&g_b << endl;
	
	static int s_a = 10,s_b=10;	//静态变量，在普通变量前加static，属于静态变量(静态变量也会放在我们的全局区里)
	cout << "静态变量a的地址为：" << (int)&s_a << endl;
	cout << "静态变量b的地址为：" << (int)&s_b << endl;

	//常量分为字符串常量""包括起来的都为字符串，和const修饰的变量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
	//const修饰变量分为：const修饰的全局变量和const修饰的局部变量
	cout << "const全局常量a的地址为：" << (int)&c_a << endl;
	cout << "const全局常量b的地址为：" << (int)&c_b << endl;
	const int c_a2 = 10, c_b2 = 10;	//const修饰的局部变量
	cout << "const局部常量c_a2的地址为：" << (int)&c_a2 << endl;
	cout << "const局部常量c_b2的地址为：" << (int)&c_b2 << endl;
	system("pause");
	return 0;
}