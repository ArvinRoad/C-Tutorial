#include<iostream>
using namespace std;

class Person16 {
public:
	//��Ա�������const�󲻿����޸ĳ�Ա���ԡ�thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//const Person * const this;
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson()const{	//������
		//this->m_A = 100;	//����const�趨�����޸�thisָ���ָ���ֵ��
		//this = NULL;	//����thisָ�벻�����޸�ָ���ָ��
		this->m_B = 100;
	}
	int m_A;
	mutable int m_B;	//�����������ʹ�ڳ�������Ҳ����ȥ�޸����ֵ,���Ϲؼ���mutable
};

void test22() {
	Person16 P;
	P.showPerson();
}
void test23() {
	const Person16 P;	//�ڶ���ǰ��һ��const��Ϊ������
	//P.m_A = 100;	//���������󲻿����޸�this��ָ��ָ��
	P.m_B = 100;	//�������У�����������޸�ֵǰ���Ϲؼ���mutable
	P.showPerson();	//������ֻ�ܵ��ó�����
	//p.func();	//�����������ܵ���������������Ϊ��ͨ��Ա���������޸����ԡ�
}
void func10() {

}

int main37() {
	system("pause");
	return 0;
}