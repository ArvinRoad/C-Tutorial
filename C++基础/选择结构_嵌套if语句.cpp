#include<iostream>
using namespace std;

int main20() {

	int A = 0;

	cout << "���������ĳɼ���" << endl;
	cin >> A;
	cout << "���ĳɼ�Ϊ��" << A << endl;

	if (A >= 600) {
		cout << "��ϲ������һ��" << endl;
	}else if(A>=500){
		cout << "��ϲ�㿼�����" << endl;
	}else if (A > 400) {
		cout << "��ϲ�㿼������" << endl;
	}else {
		cout << "���ٴ��������ĳɼ���" << endl;
		cin >> A;

		if (A<=400){
			cout << "���ź������ٽ�������" << endl;
		}else {
			cout << "��������������" << endl;
		}
	}

	system("pause");

	return 0;
}