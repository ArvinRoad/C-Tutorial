#include<iostream>
using namespace std;

int main23() {	//23
	
	//��һ����Ӱ��֣�10~9���䡣8~7�ǳ��á�6~5һ�㡣5���²
	int A = 0;

	cout << "����:(���10��)" << endl;
	cin >> A;	cout << "���ķ���Ϊ��" << A << endl;

	switch (A) {
	case 10:
		cout << "���۾���" << endl;
		break;	//�˳���ǰ��֧
	case 9:
		cout << "���۾���" << endl;
		break;
	case 8:
		cout << "���۷ǳ���" << endl;
		break;
	case 7:
		cout << "���۷ǳ���" << endl;
		break;
	case 6:
		cout << "����һ��" << endl;
		break;
	default:
		cout << "���۲�" << endl;
	}

	system("pause");

	return 0;
}