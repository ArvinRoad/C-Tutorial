#include<iostream>
using namespace std;

int main2() {

	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;

	cout << "short ������ռ�ڴ��С" << sizeof(short) << endl;
	cout << "int ������ռ�ڴ��С" << sizeof(int) << endl;
	cout << "long ������ռ�ڴ��С" << sizeof(long)<<endl;
	cout << "long long ������ռ�ڴ��С"<<sizeof(long long) << endl;

	cout << "num1 ���ڴ��СΪ" << sizeof(num1) << endl;
	cout << "num2 ���ڴ��СΪ" << sizeof(num2) << endl;
	cout << "num3 ���ڴ��СΪ" << sizeof(num3) << endl;
	cout << "num4 ���ڴ��СΪ" << sizeof(num4) << endl;

	return 0;
}