#include<iostream>
using namespace std;

int& test03() {	//�����õķ�ʽ���з���
	int a = 10;	//�ص㣺����������е�ջ��
	return a;	//����a�����ã�a�ı�����Ϊ����ֵ
}

int& test04() {	//�����ĵ��ÿ�����Ϊ��ֵ
	static int a = 10;	//��̬�����������ȫ�����������������ϵͳ�Զ��ͷ�
	return a;
}

int main8() {
	//int &ref = test03();	//�����õķ�ʽ���ؾֲ�����
	//cout << "ref = " << ref << endl;	//������룬��Ϊa���ڴ��Ѿ����ͷţ����ڷǷ�����
	int& ref = test04();
	cout << "ref = " << ref << endl;	//�����ĵ��ÿ�����Ϊ��ֵ���Ⱥŵ���߼�Ϊ��ֵ
	test04() = 1000;	//�൱�ڸ�ֵ1000��a,ԭ����ֵΪ1000�����ñ���ȥ��������ڴ�
	cout << "ref = " << ref << endl;
	system("pause");
	return 0;
}