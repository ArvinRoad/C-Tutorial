#include<iostream>
using namespace std;
#include<string>

int main50() {
	int scores[3][3] = {{100,100,100},{90,50,100},{60,70,80}};
	string name[3]{ "����","����","����" };
	for (int i = 0; i < 3; i++){
		int sum = 0;	//ͳ�Ʒ����ܺ�
		for (int j = 0; j < 3; j++){
			sum += scores[i][j];
			cout << scores[i][j] << " ";
		}
		cout << name[i] << "���˵��ܷ�Ϊ��" << sum << endl;
	}

	system("pause");

	return 0;
}