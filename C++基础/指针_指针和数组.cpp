#include<iostream>
using namespace std;

int main65() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "�����е�һ��Ԫ�أ�" << arr[0] << endl;
	//����ָ�����������Ԫ��
	int* p = arr;	//arr����������׵�ַ
	cout << "����ָ�������ʵ�һ��Ԫ�أ�" << *p << endl;
	p++;	//��ָ�����ƫ��4���ֽ�
	cout << "����ָ�������ʵڶ���Ԫ��" << *p << endl;
	cout << "����ָ������������" << endl; int* p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p2 << endl;
		p2++;
	}

	system("pause");

	return 0;
}