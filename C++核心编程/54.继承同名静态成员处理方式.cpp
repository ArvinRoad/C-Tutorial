#include<iostream>
using namespace std;

class Base05 {
public:
	static int M_A;	//��̬��Ա����
	static void func12() {	//��̬��Ա����
		cout << "Base - Static void func()�ĵ��ã�" << endl;
	}
};
int Base05::M_A=100;	//��̬��Ա��Ҫ�����ʼ��

class Son06 :public Base05 {
public:
	static int M_A;
	static void func12() {	//��̬��Ա����
		cout << "Son - Static void func()�ĵ��ã�" << endl;
	}
};
int Son06::M_A = 200;

void test46() {
	Son06 s;
	cout << "�������:Son::M_A = " << s.M_A << endl;	//���ྲ̬��Ա���Է���
	cout << "�������:Base::M_A = " << s.Base05::M_A << endl;	//���ྲ̬��Ա���Է���
	cout << "��������:Son::M_A = " << Son06::M_A << endl;	//���ྲ̬��Ա���Է���
	cout << "��������:Base::M_A = " << Son06::Base05::M_A << endl;	//���ྲ̬��Ա���Է���
}
void test47() {
	Son06 s;
	s.func12();	//���ྲ̬��Ա��������
	s.Base05::func12();	//���ྲ̬��Ա��������
	Son06::func12();	//������������
	Son06::Base05::func12();	//������������
}

int main54() {
	test46();
	test47();
	system("pause");
	return 0;
}