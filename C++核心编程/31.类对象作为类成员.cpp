#include<iostream>
using namespace std;
#include<string>

class Phone {	//�ȵ������
public:
	Phone(string PPname) {
		M_Pname = PPname;
	}
	~Phone(){	//���������
		cout << "Phone��������������" << endl;
	}
	string M_Pname;
};
class Person10 {	//��������
public:
	Person10(string name,string Pname):M_Name(name),M_Phone(Pname) {
		
	}
	~Person10(){	//���������
		cout << "Person��������������" << endl;
	}
	string M_Name;
	Phone M_Phone;	//�����:M_Phone = PPname	//�൱����ʽת����
};

void test15() {
	Person10 P("����","ƻ��MAX");
	cout << P.M_Name << "������" << P.M_Phone.M_Pname << "�ֻ���" << endl;
}

int main31() {
	test15();
	system("pause");
	return 0;
}