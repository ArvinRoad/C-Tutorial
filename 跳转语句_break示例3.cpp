#include<iostream>
using namespace std;

int main34() {
	//Ƕ�����
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;	//�˳��ڲ�ѭ��
			}
			cout << "*";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}