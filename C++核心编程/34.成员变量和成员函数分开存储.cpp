#include<iostream>
using namespace std;

class Person13 {
	int m_A;	//�Ǿ�̬������������Ķ�����
	static int m_B;	//��̬�������������������
	void func10() {}	//�Ǿ�̬��Ա�������������������
	static void func11() {}	//��̬��Ա�������������������
};
int Person13::m_B = 0;

void test18(){
	Person13 P;
	/*
			����Ϊ1�ֽڣ�C++���������ÿ���ն���Ҳ����һ���ֽڵĿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
			��int m_A��Ϊ4���ֽڡ�������Ķ�����
			����static int m_B;ҲΪ4���ֽڣ���Ϊ��̬�����������������
	*/
	cout << "Personռ�ڴ�ռ�Ϊ��" << sizeof(P) << endl;

}

int main34() {
	test18();
	system("pause");
	return 0;
}