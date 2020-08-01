#include<iostream>
using namespace std;

int main2() {

	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;

	cout << "short 类型所占内存大小" << sizeof(short) << endl;
	cout << "int 类型所占内存大小" << sizeof(int) << endl;
	cout << "long 类型所占内存大小" << sizeof(long)<<endl;
	cout << "long long 类型所占内存大小"<<sizeof(long long) << endl;

	cout << "num1 的内存大小为" << sizeof(num1) << endl;
	cout << "num2 的内存大小为" << sizeof(num2) << endl;
	cout << "num3 的内存大小为" << sizeof(num3) << endl;
	cout << "num4 的内存大小为" << sizeof(num4) << endl;

	return 0;
}