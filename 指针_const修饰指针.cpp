#include<iostream>
using namespace std;

int main64() {
	int a = 10, b = 10; 
	const int* p = &a;	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	int* const p2 = &a;	//ָ��ָ���ֵ���Ըģ�ָ���ָ�򲻿��Ը�
	const int* const p3 = &a;	//ָ��ָ���ֵ�����Ըģ�ָ���ָ��Ҳ�����Ը�

	system("pause");

	return 0;
}