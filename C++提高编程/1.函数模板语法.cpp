#include<iostream>
using namespace std;

void swapInt(int &a,int &b) {	//��ͨ������ֵ��������(&��������)
	int temp = a;a = b;b = temp;
}
void swapDouble(double& a, double& b) {	//��ͨ������ֵ��������(&��������)
	double temp = a;a = b;b = temp;
}

template<typename T> //����һ��ģ�壬���߱��������������T��Ҫ����(ͨ����������)
void mySwap(T& a, T& b) {	//ȫ������ֵ��������
	T temp = a;a = b;b = temp;
}

void test1() {	//ʵ����
	int a = 10, b = 20;swapInt(a, b);cout << "a = " << a << " b=" << b << endl;
	double c = 1.1, d = 2.2;swapDouble(c, d);cout << "c = " << c << " d=" << d << endl;
	//���ַ�ʽʹ�ú���ģ��
	int a1 = 10, b1 = 20;
	mySwap(a1, b1);	//1.�Զ������Ƶ�
	swapInt(a1, b1);cout << "a1= " << a1 << " b1=" << b1 << endl;
	int a2 = 10, b2 = 20;
	mySwap<int>(a2, b2);	//2.��ʾָ������
	swapInt(a2, b2);cout << "a1= " << a2 << " b1=" << b2 << endl;
}

int main1() {
	test1();
	system("pause");
	return 0;
}