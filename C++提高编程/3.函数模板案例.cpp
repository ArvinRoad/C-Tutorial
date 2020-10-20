#include<iostream>
using namespace std;

template<typename T>
void mySwap3(T &a,T &b) {
	T temp = a;a = b;b = temp;
}
template<typename T>
void mySort3(T arr[],int len) {	//�����㷨����
	for (int i = 0;i < len;i++) {
		int max = i;	//�϶����ֵ�±�
		for (int j = i + 1;j < len;j++) {
			if (arr[max] < arr[j]) {	//�����϶������ֵ�ȱ���������ֵС��˵��jС���Ԫ�ز������ֵ
				max = j;	//�������ֵ

			}
		}
		if (max != i) {
			mySwap3(arr[max], arr[i]);	//����max��iԪ��
		}
	}
}
template<typename T>
void printArray(T arr[],int len) {	//��ӡ����
	for (int i = 0;i < len;i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}
void test3() {
	char charArr[] = "badcfe";	//����char����
	int num = sizeof(charArr) / sizeof(char);
	mySort3(charArr, num);
	printArray(charArr, num);
}
void test3a1() {
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort3(intArr, num);
	printArray(intArr, num);
}

int main3() {
	test3();
	test3a1();
	system("pause");
	return 0;
}