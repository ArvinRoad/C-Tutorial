#include<iostream>
using namespace std;

int main16() {

	int a,b,A,B;
	a = 10; b = 10; A = 0; B = 0;

	cout << !a << endl;		//0
	cout << !!a << endl;	//!!ȡ������ 1

	cout << (a && b) << endl; //���Ϊ��
	cout << (A && b) << endl; //���Ϊ��
	cout << (A && B) << endl;	//���Ϊ�١�ͬ��Ϊ�棬����Ϊ��

	cout << (a || b) << endl;	//���Ϊ��
	cout << (A || b) << endl;	//���Ϊ��
	cout << (A || B) << endl;	//���Ϊ�١�	ͬ��Ϊ�٣�����Ϊ�档

	system("pause");

	return 0;
}