#include<iostream>
using namespace std;

class Person12 {
public:
	static void func10() {	//��̬��Ա����
		m_A = 100;	//��̬�ĳ�Ա�����ǿ��Է��ʾ�̬�ĳ�Ա���������ǹ����
		//m_B = 200;	//������̬��Ա���������Է��ʷǾ�̬�ĳ�Ա�������޷����ֵ������ĸ������m_B����
		cout << "static void func10()�ĵ���" << endl;
	}
	static int m_A;	//��̬��Ա����
	int m_B;	//�Ǿ�̬�ĳ�Ա����
	
private:	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func11() {
		cout << "static void func2()�ĵ���" << endl;
	}
};
int Person12::m_A = 0;	//���������������ʼ��

void test17() {
	Person12 P;	//ͨ���������
	P.func10();

	Person12::func10();	//ͨ����������

	//Person12::func10();	//�����޷�����˽���������޷�����˽�о�̬��Ա����

}

int main33() {
	test17();
	system("pause");
	return 0;
}