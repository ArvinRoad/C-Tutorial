#include<iostream>
using namespace std;

class Person21 {
public:
	Person21(string name,int age) {
		M_Name = name;
		M_Age = age;
	}
	bool operator==(Person21 &p) {	//��ϵ��������غ���,��Ⱥ���
		if (this->M_Name == p.M_Name && this->M_Age == p.M_Age) {
			return true;
		}
		return false;
	}
	bool operator!=(Person21& p) {	//��ϵ��������غ���,���Ⱥ���
		if (this->M_Name == p.M_Name && this->M_Age == p.M_Age) {
			return false;
		}
		return true;
	}
private:
	string M_Name;
	int M_Age;
};

void test34() {
	Person21 P1("Tom",18);
	Person21 P2("Tom", 18);
	if (P1 == P2) {
		cout << "P1��P2��ȣ�" << endl;
	}
	else{
		cout << "P1��P2���ȣ�" << endl;
	}

	if (P1 != P2) {
		cout << "P1��P2���ȣ�" << endl;
	}
	else {
		cout << "P1��P2��ȣ�" << endl;
	}
}

int main46() {
	test34();
	system("pause");
	return 0;
}