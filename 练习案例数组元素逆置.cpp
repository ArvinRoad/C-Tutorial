#include<iostream>
using namespace std;

int main() {	//43
	
	int arr[5] = { 1,3,2,5,40 };
	cout << "��������ǰ��" << endl;
	for (int num = 0; num < 5; num++) {
		cout << arr[num];
	}
	int start = 0;	//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;	//�����±�
	while (start < end) {
		int temp = arr[start];	//ʵ��Ԫ�ػ���
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "����Ԫ�����ú�" << endl;
	for (int num = 0; num < 5; num++) {
		cout << arr[num];
	}
	system("pause");

	return 0;
}