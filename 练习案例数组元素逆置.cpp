#include<iostream>
using namespace std;

int main() {	//43
	
	int arr[5] = { 1,3,2,5,40 };
	cout << "数组逆置前：" << endl;
	for (int num = 0; num < 5; num++) {
		cout << arr[num];
	}
	int start = 0;	//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;	//结束下标
	while (start < end) {
		int temp = arr[start];	//实现元素互换
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "数组元素逆置后：" << endl;
	for (int num = 0; num < 5; num++) {
		cout << arr[num];
	}
	system("pause");

	return 0;
}