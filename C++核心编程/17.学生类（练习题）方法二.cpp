#include<iostream>
using namespace std;
#include<string>
class Student01 {
public:
	string name;
	int m_XH;
	void showStudent() {	//��ӡ����
		cout << "����:" << name << endl;
		cout << "ѧ��" << m_XH << endl;
	}
};
int main17() {
	Student01 s2;
	Student01 s3;
	s2.name = "����";
	s2.m_XH = 125;
	s2.showStudent();
	s3.name = "����";
	s3.m_XH = 124;
	s3.showStudent();
	system("pause");
	return 0;
}