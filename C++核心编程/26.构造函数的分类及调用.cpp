#include<iostream>
using namespace std;

class Person04 {
public:
	Person04() {	//�޲ι��죨Ĭ�Ϲ��캯����
		cout << "Person���޲ι��캯������" << endl;
	}
	Person04(int a) {
		age = a;
		cout << "Peron���вι��캯������" << endl;
	}
	Person04(const Person04 &P) {	//�������캯������¡����
		age = P.age;	//������������ϵ��������ԣ���������ǰ��������
		cout << "Peron�Ŀ������캯������" << endl;
	}
	~Person04()
	{
		cout << "Person��������������" << endl;
	}
	int age;
};
void test06() {	//����
	Person04 p;	//Ĭ�ϵ���
	Person04 p2(10);	//���ŵ��ã������вι��캯��
	Person04 p3(p2);	//���ŵ��ã����ÿ�������
	cout << "P2�����䣺" << p2.age << endl;	//ע�⣺����Ĭ�Ϲ��캯��ʱ��Ҫ��()
	cout << "P3�����䣺" << p3.age << endl;	//������������ϵ��������ԣ���������ǰ��������

	Person04 p4 = Person04(10);	//��ʾ���ã������вι���
	Person04 p5 = Person04(p4);	//��ʾ���ã����ÿ�������
	Person04(10);	//�������󣬴�������û�����ơ��ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������

	Person04 p6 = 10;	//��ʽ���ã��൱�� Person p6 = Person(10); �вι������
	Person04 p7 = p6;	//��ʽ���ã���������
	
}
int main26() {
	test06();
	system("pause");
	return 0;
}