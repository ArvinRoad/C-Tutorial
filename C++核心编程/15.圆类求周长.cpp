#include<iostream>
using namespace std;
//��Բ�ܳ���ʽ��2 * PI * �뾶

const double PI = 3.14;	//Բ����

class Circle {	//���һ��Բ��
public:	//��������Ȩ��
	int m_r;	//���ԣ��뾶(һ���ñ���)
	double calculateZC() {	//��Ϊ����ȡԲ���ܳ�(һ���ú���)
		return 2 * PI * m_r;
	}
};

int main15() {
	Circle c1;	//ͨ��Բ�ഴ��һ������Ķ���
	c1.m_r = 10;	//��Բ�������Խ��и�ֵ���뾶����10
	cout << "Բ�ܳ�Ϊ��" << c1.calculateZC() << endl;	//ͨ��Բ������Ϊ��ȡԲ�ܳ���2*PI*10���Ϊ62.8
	system("pause");
	return 0;
}