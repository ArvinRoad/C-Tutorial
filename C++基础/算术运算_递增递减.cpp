#include<iostream>
using namespace std;

int main13() {

	//前置递增,先让变量进行+1，然后进行表达式的运算。--同理
	int a = 10;
	++a;
	cout << "a = " << a << endl;
	
	//后置递增，先进行表达式的运算，然后+1。--同理
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}