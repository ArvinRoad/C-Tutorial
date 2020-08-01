#include<iostream>
using namespace std;

int main49() {
	int arr[2][3] = {
		{1,2,3},{4,5,6}
	};
	cout << "二维数组占用的内存空间：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间：" << sizeof (arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存空间：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "十六进制二维数组的首地址为：" << arr << endl;
	cout << "十进制二维数组的首地址为：" << (int)arr << endl;
	cout << "十六进制二维数组中第一行的首地址为：" << arr[0] << endl;
	cout << "十进制二维数组中第一行的首地址为：" << (int)  arr[0] << endl;
	cout << "十进制二维数组第一个元素的首地址为：" << (int)&arr[0][0] << endl;
	cout << "十进制二维数组第二个元素的首地址为：" << (int)&arr[0][1] << endl;
	system("pause");

	return 0;
}