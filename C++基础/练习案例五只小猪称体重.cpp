#include<iostream>
using namespace std;

int main42() {
	/*
	�㷨��int max = 0 ���������е�ÿ������������Ԫ�ر����϶������ֵҪ��͸����ҵ����ֵ
	*/
	int arr[5] = { 300,350,200,400,250 };	//��ֻС������
	int max = 0;	//�������ֵ�洢
	for (int num = 0; num < 5; num++) {
		if (arr[num]>max){	//������ʵ������е�Ԫ�ر�maxֵ�󣬸������ֵ
			max = arr[num];
		}
	}
	cout << "����С������Ϊ��" << max << endl;
	system("pause");

	return 0;
}