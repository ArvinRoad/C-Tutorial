#include<iostream>
using namespace std;

class Person06{
public:
	Person06() { cout << "Person��Ĭ�Ϲ��캯�����ã�" << endl; }
	Person06(int age) { cout << "Person���вκ������ã�" << endl; m_Age = age; }
	//Person06(const Person06& p) { cout << "Person�Ŀ������캯�����ã�" << endl; m_Age = p.m_Age; }
	~Person06() { cout << "Person�������������ã�" << endl; }
	int m_Age;
};

void test10() {	//Ĭ�Ͽ������캯���������Խ���ֵ����
	Person06 p;//ϵͳ����C++û���ṩĬ�Ϲ��캯��������������ǵ���Ĭ�Ϲ������Ա���
	p.m_Age = 18;
	Person06 p2(p);
	cout << "P2��AGEΪ��" << p2.m_Age << endl;
}
void test11() {	//����û������вι��캯����C++�����ṩĬ���޲ι��죬�����ṩĬ�Ͽ�������
	//Person06 P;	//ϵͳ����C++û���ṩĬ�Ϲ��캯��������������ǵ���Ĭ�Ϲ������Ա���
	Person06 P(28);
	Person06 P2(P);
	cout << "P2��AGEΪ��" << P2.m_Age << endl;
}
//	*����û����忽�����캯����C++�����ṩ�������캯��
int main28() {
	//test10();
	test11();
	system("pause");
	return 0;
}