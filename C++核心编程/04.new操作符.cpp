#include<iostream>
using namespace std;

//new�Ļ����﷨
int* func() {
	int* p = new int(10);	//�ڶ����������ͱ������ݣ�new�����Ǹ���������ָ��
	return p;

}
void test01() {
	int* p = func();
	cout << *p << endl;	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	delete p;	//������ͷŶ������������ùؼ���delete
	//cout << *p << endl;	//�ڴ��Ѿ��ͷţ�����ٴη��ʾ��ǷǷ�����
}

void test02() {//�ڶ�������һ������
	int *arr = new int[10];	//����10���������ݵ����飬�ڶ�����10����������10��Ԫ��
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;	//��10��Ԫ�ظ�ֵ100~109
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;	//�ͷ����飬�ͷ�����ʱҪ�������Ų����ͷ�
}

int main4() {
	test01();
	test02();
	system("pause");
	return 0;
}