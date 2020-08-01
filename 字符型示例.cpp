#include<iostream>
using namespace std;

int main10() {

	char ch = 'a';
	
	/*
		char ch2 = "b";
		如果ch2为"b",系统报错。char语法为''。

		char ch3 ='abc'
		如果ch3为'abc',系统报错。char只支持字符，不支持字符串。
	*/

	cout << "ch =" << ch << endl;
	cout << "char 类型的内存空间占用大小为：" << sizeof(ch) << endl;

	cout << (int)ch << endl; //查看a的ASCII编码


	system("pause");

	return 0;
}