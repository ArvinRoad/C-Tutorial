#include<iostream>
using namespace std;

void swap03(int a, int b) {
	int temp = a;b = a;b = temp;
}
void swap04(int* p1, int* p2) {
	int temp = *p1;*p1 = *p2;*p2 = temp;
	cout << "p1 =" << *p1 << endl; cout << "p2 =" << *p2 << endl;
}

int main66() {
	int a = 10, b = 20;	//ֵ����
	swap03(a, b);
	swap04(&a, &b);	//��ַ����,����ǵ�ַ���ݿ����������ǵ�ʵ��

	system("pause");

	return 0;
}