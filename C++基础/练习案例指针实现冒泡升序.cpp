#include<iostream>
using namespace std;

void printArray(int* arr, int len) {	//��ӡ����
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

void bubbleSort(int* arr, int len) {	//int * arrҲ����дΪint arr��ð��������
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len-i-1; j++){
			if (arr[j] > arr[j+1]) {
				int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
			}
		}
	}
}

int main66() {
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);	//���鳤��
	bubbleSort(arr, len);
	printArray(arr, len);
	system("pause");
	return 0;
}