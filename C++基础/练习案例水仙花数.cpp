#include<iostream>
using namespace std;

int main27() {
	//��ӡ���е���λ��,��������λ�����ҵ�ˮ�ɻ���
	int A = 100;	
		do{
			int a, b, c;
			a = 0; b = 0; c = 0;
			a = A % 10;
			b = A / 10 % 10;
			c = A / 100;
			if (a*a*a + b*b*b + c*c*c==A)
			{
				cout << "A = " << A << endl;
			}
			A++;
		} while (A<1000);

	system("pause");

	return 0;
}