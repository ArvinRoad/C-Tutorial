#include<iostream>
using namespace std;

/*�﷨������ֵ���� ������ (�β�=Ĭ��ֵ����){ʵ����} */
int func04(int a, int b = 20, int c = 30) {	//��������Լ����������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ��1.
	return a + b + c;
}
int func05(int a = 10, int b = 10);
/*
	ע�����
	1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ�����򱨴�
	2.�������������Ĭ��ֵ������ʵ�־Ͳ�����Ĭ�ϲ����ˡ�(������ʵ��ֻ��һ����Ĭ�ϲ���)
*/
int main11() {
	cout << func04(10,30) << endl;
	cout << func05(10, 10) << endl;
	system("pause");
	return 0;
}
int func05(int a, int b) {
	return a+b;
}
/*int func05(int a = 10, int b = 10) {	������룺�ض���Ĭ�ϲ���
	return a + b;
}*/