#include<iostream>
using namespace std;

int main19() {

	int A = 0;

	/*����600Ϊһ����ѧ������500������ѧ������400������ѧ������������ʧ��*/
	cout << "���������ķ���" << endl;
	cin >> A;
	cout << "���ķ���Ϊ��"<<A << endl;

	if (A>=600){
		cout << "��ϲ������һ����ѧ" << endl;
	}else if(A>=500){
		cout << "��ϲ�����϶�����ѧ" << endl;
	}else if (A > 400) {
		cout << "��ϲ������������ѧ" << endl;
	}
	else{
		cout << "�ٽ�����" << endl;
	}
	system("pause");

	return 0;
}