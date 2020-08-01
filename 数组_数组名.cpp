#include<iostream>
using namespace std;

int main41() {

	//1.通过数组名统计整个数组的内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占用的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2.通过数组名查看数组首地址
	cout << "十六进制数组的首地址为：" << arr << endl;
	cout << "十进制数组的首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	system("pause");

	return 0;
}