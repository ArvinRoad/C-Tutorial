#include<iostream>
using namespace std;

int main24() {

	//����Ļ�д�ӡ0~9ʮ����ֵ
	int A = 0; int B = 0;
	cout << "A = " << A << endl;

	A++;
	cout << "A = " << A << endl;	//����++������9

	//����ѭ����9
	while (B < 10) {
		cout << "B = " << B << endl;
		B++;
	}

	system("pause");

	return 0;
}