#include<iostream>
using namespace std;
/*����ĳ�ʼ��������*/
class Person03 {
public:
	Person03() {	//���캯�� ���г�ʼ������
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person03(){	//�������� �����������
		cout << "Person��������������" << endl;
	}
};

void test05() {
	Person03 p;	//��ջ�ϵ����ݣ�test05ִ����Ϻ�ͻ��ͷ������������ǰ���Զ�������������
}

int main25() {
	test05();
	Person03 p;	//Main������������ͷţ������ڽ�������ʱ�Ż����Main����������
	system("pause");
	return 0;
}