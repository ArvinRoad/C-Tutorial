#include<iostream>
using namespace std;

class Base01 {	//����
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base01 {	//�����̳�
public:
	void func11() {
		m_A = 10;	//�̳У����๫��Ȩ�޳�Ա��������Ȼ�ǹ���Ȩ��
		m_B = 10;	//�̳У����ౣ��Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
		//m_C = 10;	//������˽��Ȩ�޳�Ա�������޷��̳�
	}
};
class Son02 :protected Base01 {
	void func12() {
		m_A = 100;	//�̳У����๫��Ȩ�޳�Ա�������Ϊ����Ȩ��
		m_B = 100;	//�̳У����ౣ��Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
		//m_C = 100;	//������˽��Ȩ�޳�Ա�������޷��̳�
	}
};
class Son03 :private Base01 {
	void func13() {
		m_A = 100;	//�̳У����๫��Ȩ�޳�Ա�������Ϊ˽��Ȩ��
		m_B = 100;	//�̳У����ౣ��Ȩ�޳�Ա�������Ϊ˽��Ȩ��
		//m_C = 100;	//������˽��Ȩ�޳�Ա�������޷��̳�
	}
};
void test39() {
	Son s1;
	s1.m_A = 100;
	//s1.m_B = 100;	//����Ȩ�ޣ�����son��m_B�Ǳ���Ȩ�ޣ�������ʲ���
}
void test40() {
	Son02 s1;
	//s1.m_A = 100;	//����Ȩ�ޣ�����son��m_B�Ǳ���Ȩ�ޣ�������ʲ���
}
void test41() {

}

int main50() {
	system("pause");
	return 0;
}