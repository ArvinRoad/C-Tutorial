#include<iostream>
using namespace std;

int main49() {
	int arr[2][3] = {
		{1,2,3},{4,5,6}
	};
	cout << "��ά����ռ�õ��ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ䣺" << sizeof (arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ䣺" << sizeof(arr[0][0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "ʮ�����ƶ�ά������׵�ַΪ��" << arr << endl;
	cout << "ʮ���ƶ�ά������׵�ַΪ��" << (int)arr << endl;
	cout << "ʮ�����ƶ�ά�����е�һ�е��׵�ַΪ��" << arr[0] << endl;
	cout << "ʮ���ƶ�ά�����е�һ�е��׵�ַΪ��" << (int)  arr[0] << endl;
	cout << "ʮ���ƶ�ά�����һ��Ԫ�ص��׵�ַΪ��" << (int)&arr[0][0] << endl;
	cout << "ʮ���ƶ�ά����ڶ���Ԫ�ص��׵�ַΪ��" << (int)&arr[0][1] << endl;
	system("pause");

	return 0;
}