#include<iostream>
using namespace std;

class Person20 {
public:
	Person20(int age) {
		M_Age = new int(age);	//����������M_Age��������ά��
	}
	~Person20(){
		if (M_Age != NULL) {
			delete M_Age;
			M_Age = NULL;
		}
	}
	Person20& operator=(Person20& p) {
		//M_Age = p.M_Age;	//�������ṩ��ǳ����
		if (M_Age != NULL) {	//���ж�sh
			delete M_Age;
			M_Age = NULL;
		}
		M_Age = new int(*p.M_Age);
		return *this;	//����������
	}
	int* M_Age;	//����ָ�����
};

void test33() {
	Person20 P1(18);
	Person20 P2(20);
	Person20 P3(30);
	//P3 = P2 = P1;	//��ֵ����,���������return *this,�뷵������
	P3 = P2 = P1;	//��ֵ����
	cout << "PersonP1��AGEΪ��" << *P1.M_Age << endl;	//�����ò鿴����ֵ
	cout << "PersonP2��AGEΪ��" << *P2.M_Age << endl;
	cout << "PersonP3��AGEΪ��" << *P3.M_Age << endl;
}

int main45() {
	//test33();
	int a = 10, b = 20, c = 30;
	c = b = a;
	cout << "a = " << a << endl; cout << "b = " << b << endl; cout << "c = " << c << endl;
	system("pause");
	return 0;
}