#include<iostream>
using namespace std;

int add2(int num1, int num2) {	//����һ���ӷ�����
	int sum = num1 + num2;
	return sum;
}

int main52() {	//����add����
	int a = 10, b = 20;
	int c = add2(a, b);	//���������﷨
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}