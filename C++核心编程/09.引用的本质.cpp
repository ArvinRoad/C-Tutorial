#include<iostream>
using namespace std;

void func03(int& ref) {	//��������ת��Ϊ��int *const ref = &a;
	ref = 100;	//ref�����ã�ת��Ϊref = 100
}

int main9() {
	int a = 10;
	int& ref = a;	//�Զ�ת��Ϊint *const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	ref = 20;	//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;
	func03(a);
	system("pause");
	return 0;
}