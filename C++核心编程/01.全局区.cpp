#include<iostream>
using namespace std;

int g_a = 10, g_b = 10;	//ȫ�ֱ���
const int c_a = 10,c_b=10;	//const���ε�ȫ�ֱ�����ȫ�ֳ���

int main1() {
	int a = 10,b=10;	//��ͨ�ľֲ��������������ڵı�����Ϊ�ֲ�����
	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
	cout << "ȫ�ֱ���a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַΪ��" << (int)&g_b << endl;
	
	static int s_a = 10,s_b=10;	//��̬����������ͨ����ǰ��static�����ھ�̬����(��̬����Ҳ��������ǵ�ȫ������)
	cout << "��̬����a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����b�ĵ�ַΪ��" << (int)&s_b << endl;

	//������Ϊ�ַ�������""���������Ķ�Ϊ�ַ�������const���εı���
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
	//const���α�����Ϊ��const���ε�ȫ�ֱ�����const���εľֲ�����
	cout << "constȫ�ֳ���a�ĵ�ַΪ��" << (int)&c_a << endl;
	cout << "constȫ�ֳ���b�ĵ�ַΪ��" << (int)&c_b << endl;
	const int c_a2 = 10, c_b2 = 10;	//const���εľֲ�����
	cout << "const�ֲ�����c_a2�ĵ�ַΪ��" << (int)&c_a2 << endl;
	cout << "const�ֲ�����c_b2�ĵ�ַΪ��" << (int)&c_b2 << endl;
	system("pause");
	return 0;
}