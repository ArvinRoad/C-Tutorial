#include<iostream>
using namespace std;
void mySwap01(int a,int b) {	//����������ֵ����
	int temp = a;a = b;b = temp;
}
void mySwap02(int* a, int* b) {	//������������ַ����
	int temp = *a;*a = *b;*b = temp;
}
void mySwap03(int& a, int& b) {	//���ô��ݣ������β�Ҳ������ʵ��
	int temp = a;a = b;b = temp;
}
int main7() {
	int a = 10, b = 20;
	mySwap01(a, b);	//ֵ���ݣ��ββ�������ʵ��
	mySwap02(&a, &b);	//��ַ���ݣ��β�����ʵ��
	mySwap03(a,b);	//���ô��ݣ��β�����ʵ��

	system("pause");
	return 0;
}