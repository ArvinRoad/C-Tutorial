#include<iostream>
using namespace std;

int main21() {

	//if����ѵ��

	/*����ֻС��A\B\C,��ֱ�������ֻС������أ����ж���ֻ����*/

	int A, B, C;
	A = 0; B = 0; C = 0;
	
	cout << "������С��A�����أ�" << endl;
	cin >> A;
	cout << "������С��B�����أ�" << endl;
	cin >> B;
	cout << "������С��C�����أ�" << endl;
	cin >> C;

	if (A>B){
		if (A>C)
		{
			cout << "С��A����" << endl;
		}else {
			cout << "С��C����" << endl;
		}
	}else {
		if (B>C){
			cout << "С��B����" << endl;
		}else{
			cout << "С��C����" << endl;
		}
	}

	cout << "С��A������Ϊ��" << A << endl;
	cout << "С��B������Ϊ��" << B << endl;
	cout << "С��C������Ϊ��" << C << endl;

	system("pause");

	return 0;
}