#include <iostream>
using namespace std;
#define Hours 24



int main5() {

	/*
		Day = 23;
		如果day = 23，程序报错。宏常量不可修改
	*/

	int Day = 5;
	Day = 7;

	const int day = 7;
	/*
		day = 10;
		加上const修饰，如果day=10，程序报错。宏常量不可修改
	*/


	cout << "一天共有" << Hours << "小时" << endl;
	cout << "一星期有" << day << "天" << endl;
	system("pause");

	return 0;
}