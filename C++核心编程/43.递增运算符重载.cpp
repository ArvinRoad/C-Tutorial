#include<iostream>
using namespace std;

class MyInteger {	//�Զ������ͺ���
	friend ostream& operator<<(ostream& cont, MyInteger myInt);
public:
	MyInteger() { m_Num = 0; }	//��ʼ��m_NumΪ0
	MyInteger &operator++() {	//����ǰ�õ��������������������Ϊ��һֱ��һ�����ݽ��е�������
		m_Num++;
		return *this;	//��������
	}
	MyInteger operator++(int) {	//���غ��õ����������int����ռλ������������������ǰ�úͺ��õ���
		MyInteger temp = *this;	//�ȼ�¼��ʱ���
		m_Num++;
		return temp;	//����¼������أ����ò�Ҫ�������ã����ص��Ǿֲ��Ķ������á���ǰ����ִ�����ᱻ�ͷš���ǰ�õ����������ú��õ�������ֵ
	}
private:
	int  m_Num;
};
ostream& operator<<(ostream & cont, MyInteger myInt) {
	cout << myInt.m_Num;
	return cout;
}

void test29(){
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test30() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main43() {
	test29();
	int a = 0;
	cout << ++(++a) << endl;
	cout << a << endl;
	test30();
	system("pause");
	return 0;
}