#include<iostream>
using namespace std;

void showValue(const int &val) {	//��ӡ����
	//val = 1000;	//const ��ֹ���������a���β���ʵ��
	cout << "val = " << val << endl;
}

int main10() {
	int a = 10;
	//int& ref = 10;	//���������Ϊ10��һ�������������ñ�����һ��Ϸ����ڴ�ռ�(��ջ����ϵ�����)��
	const int& ref = 10;	//����const֮�󣬱������������޸�int temp = 10;int &ref = temp������Ϊ��ʱ�ռ䣬ԭ����ϵͳ���䣬ֻ�ܻ�ȡ������
	//ret = 20;	//������󣬼���const֮���Ϊ�ɶ�״̬�������޸����ݡ�
	int a2 = 100;
	cout << "a2 = " << a2 << endl;
	showValue(a2);

	system("pause");
	return 0;
}