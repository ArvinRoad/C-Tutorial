#include<iostream>
using namespace std;

class Person14 {
public:
	Person14(int age){
		this->age = age;	//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
	}

	Person14& Person14AddAge(Person14 &P) {
		this->age += P.age;
		return *this;
	}
	int age;
};

void test19() {	//������Ƴ�ͻ
	Person14 P1(18);
	cout << "m_AGEΪ��" << P1.age << endl;
}
void test20() {	//���ض����� ��*this
	Person14 P2(10);
	Person14 P3(10);
	P3.Person14AddAge(P2).Person14AddAge(P2).Person14AddAge(P2);	//��ʽ���˼��
	cout << "P3��AGEΪ��" << P3.age << endl;
}

int main35() {
	test19();
	test20();	//���20
	system("pause");
	return 0;
}