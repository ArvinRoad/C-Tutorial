#include<iostream>
using namespace std;

class Person17 {
public:
	/*Person17 operator+(Person17& p) {	//�Ӻ���������غ���,��Ա����
		Person17 temp;
		temp.M_A = this->M_A + p.M_A;
		temp.M_B = this->M_B + p.M_B;
		return temp;
	}*/
	int M_A, M_B;
};
Person17 operator+(Person17& P1, Person17& P2) {	//�Ӻ���������غ�����ȫ�ֺ���
	Person17 temp;
	temp.M_A = P1.M_A + P2.M_A;
	temp.M_B = P1.M_B + P2.M_B;
	return temp;
}
Person17 operator+(Person17& P1, int num) {	//���������Ҳ���Է�����������
	Person17 temp;
	temp.M_A = P1.M_A + num;
	temp.M_B = P1.M_B + num;
	return temp;
}

void test27() {
	Person17 P1;
	Person17 P2;
	P1.M_A = 10;
	P1.M_B = 10;
	P2.M_A = 10;
	P2.M_B = 10;
	Person17 P3 = P1 + P2;
	Person17 P4 = P1 + 100;	//���������Ҳ���Է����������أ�Person + int ��
	cout << "P3.M_A = " << P3.M_A << endl;
	cout << "P4.M_B = " << P4.M_B << endl;
}

int main41() {
	test27();
	system("pause");
	return 0;
}