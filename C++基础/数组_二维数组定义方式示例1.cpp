#include<iostream>
using namespace std;

int main45() {
	//�ṹ���������� ������ [����][����]��
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	cout << arr[0][0] << endl;
	cout << arr[0][1] << endl;
	cout << arr[0][2] << endl;
	cout << arr[1][0] << endl;
	cout << arr[1][1] << endl;
	cout << arr[1][2] << endl;
	for (int i = 0; i < 2; i++) {	//���ѭ����ӡ����
		for (int j = 0; j < 3; j++) {	//�ڲ�ѭ����ӡ����
			cout << arr[i][j] << " ";
		}
	}
	system("pause");

	return 0;
}