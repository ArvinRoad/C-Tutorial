#include<iostream>
using namespace std;

void swap(int num1,int num2) {	//ʵ���������ֽ��н����ĺ���
	cout << "����ǰ��" << endl; cout << "num1 = " << num1 << endl; cout << "num2 = " << num2 << endl;
	int temp = num1;num1 = num2;num2 = temp;
	cout << "������" << endl; cout << "num1 = " << num1 << endl; cout << "num2 = " << num2 << endl;
	//return;����ֵ����Ҫʱ���Բ�д
}

int main53() {
	int a = 10, b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}