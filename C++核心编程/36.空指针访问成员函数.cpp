#include<iostream>
using namespace std;

class Person15 {	//��ָ����ó�Ա����
public:
	void showClassName() {
		cout << "This is Parson Class" << endl;
	}
	void showPersonAge() {
		if (this == NULL) {	//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳�ԣ�Ԥ����ָ�룬��ֹ�ƻ���
			return;
		}
		cout << "AGEΪ��" << this->m_Age << endl;
	}
	int m_Age;
};

void test21() {
	Person15* p = NULL;
	p->showClassName();	//�������У�C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
	//p->showPersonAge();	//����pΪNULL�����޷����ʡ�
}

int main36() {
	test21();
	system("pause");
	return 0;
}