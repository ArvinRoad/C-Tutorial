#include<iostream>
using namespace std;

class Person18 {
	/*void operator<<(cout) {	//������������غ�������Ա����
		
	}*/
	friend ostream& operator<<(ostream& cout, Person18 p);	//���������˽�г�Ա������������Ԫ�����������
public:
	Person18(int a, int b) {	//���test28�ĺ�������
		M_A = a; M_B = b;
	}
private:
	int M_A, M_B;
};
/* ostream�Ǳ�׼������࣬���������鿴�����࣬ȫ��ֻ����һ��������ʹ�����á�&����ʽ */
ostream & operator<<(ostream &cout,Person18 p) {	//���ʣ�operator << (cout,p); �򻯣�cout << p;
	cout << "M_A = " << p.M_A << " M_B = " << p.M_B;
	return cout;

}

void test28() {
	Person18 p(10,10);
	//p.M_A = 10; p.M_B = 10;
	//cout << "p.M_A:" << p.M_A << endl; cout << "p.M_B:" << p.M_B << endl;
	//cout << p;	//����������Ϊ���塣ϵͳ��֪�����ִ��
	//cout << p << endl;	//��endl����
	cout << p;
	cout << p << endl;	//ʹ����ʽ���˼�룬����ostream�ຯ��
}

int main42() {
	test28();
	system("pause");
	return 0;
}