#include<iostream>
using namespace std;

int main32() {
	//switch���
	cout << "��ѡ�񸱱��Ѷȣ�" << endl;
	cout << "\t1.��ͨ�Ѷ�" << endl;
	cout << "\t2.�е��Ѷ�" << endl;
	cout << "\t3.�����Ѷ�" << endl;
	int select = 0;
	cin >> select;
	switch (select){
	case 1:
		cout << "��ѡ�������ͨ�Ѷȡ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷȡ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷȣ�" << endl;
		break;
	}

	system("pause");

	return 0;
}