#include<iostream>
using namespace std;

int main35() {
	for (int i = 0; i <= 100; i++){
		cout << i << endl;
		//���������ż�������
		if (i % 2 == 0){
			continue;	//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
		}
	}
	system("pause");

	return 0;
}