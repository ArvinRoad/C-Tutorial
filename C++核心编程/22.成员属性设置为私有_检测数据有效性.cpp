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
	int getAge() {	//��ȡ���䣬�ɶ���д��������޸���������ķ�Χ������0~150֮�䣩
		return m_Age02;
	}
	void setAge(int setage) {	//�������䣬��Ч����֤
		if (setage < 0 || setage>150) {
			cout << "���������ֵ����" << endl;
			return;
		}
		m_Age02 = setage;
	}
	void setLove(string setlove) {	//��������
		m_Love = setlove;
	}
private:	//���ԣ�˽��Ȩ��
	string name;	//�ɶ���д
	int m_Age02;	//�ɶ���д
	string m_Love;	//��д
};

int main22() {
	Person02 p;
	p.setName03("����");
	cout << "����Ϊ��" << p.getName() << endl;
	p.setAge(150);
	cout << "����Ϊ��" << p.getAge() << endl;
	p.setLove("����");
	//cout << "���ˣ�" << p.setLove << endl;	//����ֻ��д�벻�ɶ�ȡ
	system("pause");
	return 0;
}