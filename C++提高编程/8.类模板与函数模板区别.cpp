#include<iostream>
using namespace std;
#include<string>

template<class NameType,class AgeType = int>	//��ģ����ģ������б��п�����Ĭ�ϲ�����Ĭ��=int����
class Person8 {
public:
	Person8(NameType name, AgeType age) {
		this->M_name = name;
		this->M_age = age;
	}
	void ShowPerson() {
		cout << "name:" << this->M_name << "age:" << this->M_age << endl;
	}
	NameType M_name;
	AgeType M_age;
};
void test8() {	//��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
	//Person8 p("�����", 1000); //�����޷��Զ������Ƶ�
	Person8<string, int> p("�����", 1000);	//��ȷд����ֻ������ʾָ�����ͷ�ʽ
	p.ShowPerson();
}
void test8a1() {	//��ģ����ģ������б��п�����Ĭ�ϲ���
	Person8<string> d("��˽�", 1000);
	d.ShowPerson();
}

int main8() {
	test8();
	system("pause");
	return 0;
}