#include<iostream>
using namespace std;

class Base04 {
public:
	Base04() {
		M_A = 100;
	}
	void func11() {	//����
		cout << "Base - func()���ã�" << endl;
	}
	void func11(int a) {
		cout << "Base - func(int a)����!" << endl;
	}
	int M_A;
};
class Son05 :public Base04 {
public:
	Son05() {
		M_A = 200;
	}
	void func11() {	//����
		cout << "Son - func()���ã�" << endl;
	}
	void func11(int a) {
		cout << "Son - func(int a)����!" << endl;
	}
	int M_A;
};

void test44(){	//���Դ���
	Son05 s;
	cout << "Son:M_A��ֵΪ��" << s.M_A << endl;	//������������ֵ
	cout << "Base:M_A��ֵΪ��" << s.Base04::M_A << endl;	//������������ֵ
}
void test45() {	//��������
	Son05 s;
	s.func11();	//�������ຯ��
	s.Base04::func11();	//���ø��ຯ��
	s.func11(100);	//�����������غ���
	s.Base04::func11(100);	//���ø������غ���
}

int main53() {
	test44();
	test45();
	system("pause");
	return 0;
}