#include<iostream>
using namespace std;

int max(int a, int b);	//��������ǰ����

int main58() {	
	int a = 10, b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}
//���庯��
int max(int a, int b) {	//�ȽϺ�����ʵ�������������бȽϣ����ؽϴ��ֵ
	return a > b ? a : b;
}
