#include<iostream>
using namespace std;
//������Ϊ��������
void func08(int &a) {	//�������Ͳ�ͬ��int &a = 10;���Ϸ�
	cout << "func (int &a) �ĵ���" << endl;
}

void func08(const int & a) {	//const int &a = 10;�Ϸ�
	cout << "func (const int &a) �ĵ���" << endl;
}
//������������Ĭ�ϲ���
void func09(int a) {
	cout << "func09 (int a) �ĵ���" << endl;
}
/*void func09(int a,int b = 10) {	//����������Ե���������Ե������ֶ����ԣ���������
	cout << "func09 (int a,int b = 10) �ĵ���" << endl;
}*/

int main14() {
	int a = 10;
	func08(a);	//���ò���Const�ģ�a�����Ǳ�����Const��ֻ��״̬��
	func08(10);	//10Ϊ���������Ե���Const
	func09(10);
	func09(10);
	//func09(10, 20); �޸������������
	system("pause");
	return 0;
}