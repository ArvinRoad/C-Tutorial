#include<iostream>
using namespace std;

class Person {	//���࣬publicȨ�ޣ���Ա���ڿ��Է��ʣ�����Ҳ���Է���
public:	//����Ȩ��
	string name;
protected:	//����Ȩ��
	string m_Car;	//����
private:	//˽��Ȩ��
	int m_Password;	//���п�����
public:	//���ڷ��ʣ�����д�ɱ�����˽��Ȩ�ޣ��������޷�����
	void func10() {
		name = "����";
		m_Car = "��ʱ��";
		m_Password = 652456;
	}
};

int main19() {
	Person p1;
	p1.name = "��С��";
	//p1.m_Car;	//����Ȩ�޲��������������
	//p1.m_Password = 123456;	//˽��Ȩ�޲��������������
	system("pause");
	return 0;
}