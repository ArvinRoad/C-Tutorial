#include<iostream>
using namespace std;

int main44() {

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前结果：" << endl;
	for (int num = 0; num < 9; num++) {
		cout << arr[num] << " ";
	}
	cout << endl;
	//开始冒泡排序
	for (int i = 0; i < 9-1; i++){
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后结果：" << endl;
	for (int num = 0; num < 9; num++) {
		cout << arr[num] << " ";
	}
	system("pause");

	return 0;
}