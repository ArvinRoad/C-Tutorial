#include<iostream>
using namespace std;

int main41() {

	//1.ͨ��������ͳ������������ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.ͨ���������鿴�����׵�ַ
	cout << "ʮ������������׵�ַΪ��" << arr << endl;
	cout << "ʮ����������׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	system("pause");

	return 0;
}