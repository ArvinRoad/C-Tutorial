#include<iostream>
using namespace std;
#include<ctime>		//Timeϵͳʱ��ͷ�ļ�����

int main25() {

	/*ϵͳ�������һ��1~100����ֵ����ҽ��в²⣬����´���ʾ�����ֵ������С������¶Թ�ϲ��Ҳ��˳���Ϸ*/
	//�����������ӣ����õ�ǰϵͳʱ������������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	int A = rand() % 100 + 1;	//rand()%100����һ��0~99�������ֵ��rand��C++��������ɡ�+1Ϊ0~100�������
	cout << "Rand��ֵΪ��" << A << endl;
	int B = 0;	//��������ֵ
	cout << "��²⣺" << endl;
	while (1) {
		cin >> B;
		if (B > A) {
			cout << "�����ˣ�" << endl;
		}
		else if (B == A) {
			cout << "��ϲ�������" << endl;
			break;
		}
		else {
			cout << "��С�ˣ�" << endl;
		}
	}

	system("pause");

	return 0;
}