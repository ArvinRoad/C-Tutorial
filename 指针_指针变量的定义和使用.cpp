#include<iostream>
using namespace std;

int main60() {
	int a = 10;	//����ָ�룬�ṹ���������� * ָ�������
	int* p;
	p = &a;	//��ָ���¼����a�ĵ�ַ��&ȡַ��
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	*p = 1000;	//*��������ã��ҵ�ָ��ָ���ڴ��е�����
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");

	return 0;
}