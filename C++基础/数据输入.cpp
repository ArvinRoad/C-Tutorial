#include<iostream>
using namespace std;
#include<string>

int main7() {

	//��������
	
	int a = 0;
	cout << "������ͱ���A���в�����" << endl;
	cin >> a;
	cout << "���ͱ���AΪ��" << a << endl;

	//����������

	float f = 3.14F;
	cout << "����������F���в�����" << endl;
	cin >> f;
	cout << "�������FΪ��" << f << endl;

	//�ַ�������

	char ch = 'a';
	cout << "����ַ�����CH���в�����" << endl;
	cin >> ch;
	cout << "�ַ�����CHΪ��" << ch << endl;

	//�ַ���������

	string str = "Hello C++";
	cout << "����ַ�������STR���в�����" << endl;
	cin >> str;
	cout << "�ַ�������Ϊ��" << str << endl;

	//����������

	bool b = true;
	cout << "�����������B���в�����" << endl;
	cin >> b;
	cout << "��������Ϊ��" << b << endl;

	//���ȫ��
	cout << "���͡����㡢�ַ����ַ��������������ֱ�Ϊ��" << a << f << ch << str << b << endl;

	system("pause");

	return 0;
}