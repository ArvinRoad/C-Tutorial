#include<iostream>
using namespace std;

int main6() {
	
	float f1 = 3.14F; //�����ȣ��������F����������Ϊ����Double��˫���ȣ����͡�
	double b1 = 3.1415l;

	cout << "f1 =" << f1 << endl;
	cout << "b1 =" << b1 << endl;
	//Ĭ������£����һ��С����ֻ����ʾ6λ��Ч��ֵ

	cout << "float ������ռ�ڴ�ռ��СΪ��" << sizeof(f1) << endl;
	cout << "double ������ռ�ڴ�ռ��СΪ��" << sizeof(double)<< endl;
	
	//��ѧ����
	float f2 = 3e2; //3*10^2
	cout << "F2 =" << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "F3 =" << f3 << endl;

	
	system("pause");

	return 0;
}