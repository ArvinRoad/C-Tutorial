#include<iostream>
using namespace std;

int main6() {
	int a = 10;
	int& b = a;
	//int& c;	//������룬���ñ����ʼ��
	int c = 20;
	c = b;	//���Ǹ�ֵ��������������
	//int& b = c;	//������룬���ó�ʼ���󲻿��Ըı�
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}