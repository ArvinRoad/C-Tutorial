#include<iostream>
using namespace std;
#include<string>
class Person02 {
public:
	void setName03(string setName) {	//����������д,�ṩ���������������ȥ��ֵ����
		name = setName;
	}
	string getName() {	//��ȡ����������д��
		return name;
	}
	int getAge() {	//��ȡ���䣬ֻ��
		m_Age = 18;	//��ʼ��Ϊ0��
		return m_Age;
	}
	void setLove(string setlove) {
		m_Love = setlove;
	}
private:	//���ԣ�˽��Ȩ��
	string name;	//�ɶ���д
	int m_Age;	//�ɶ�
	string m_Love;	//��д
};

int main21() {
	Person02 p;
	p.setName03("����");
	cout << "����Ϊ��" << p.getName() << endl;
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLove("����");
	//cout << "���ˣ�" << p.setLove << endl;	//����ֻ��д�벻�ɶ�ȡ
	system("pause");
	return 0;
}