#include<iostream>
using namespace std;

class Person11 {
public:
	static int m_A;	//��̬��Ա����
private:
	static int m_B;	//��̬��Ա����Ҳ���з���Ȩ�޵�
};
int Person11::m_A = 10;	//���������������ʼ��
int Person11::m_B = 10;

void test16() {
	Person11 P;	//ͨ���������
	P.m_A = 100;
	cout << "P.m_A = " << P.m_A << endl;
	Person11 P2;
	P2.m_A = 200;
	cout << "P.m_A = " << P.m_A << endl;	//����ͬһ������
	cout << "P2.m_A = " << P2.m_A << endl;

	cout << "M_B = " << Person11::m_A << endl;	//ͨ����������
}

int main32() {
	test16();
	system("pause");
	return 0;
}