#include<iostream>
using namespace std;
#include<string>
class Student02 {
public:
	string name;
	string m_XH;
	void showStudent02() {	//��ӡ����
		cout << "����:" << name << endl;
		cout << "ѧ��" << m_XH << endl;
	}
	void setName(string setName) {	//ͨ����Ϊ��ֵ
		name = setName;
	}
	void setXH(string ID) {
		m_XH = ID;
	}
};
int main18() {
	Student02 s1;
	s1.setName("����");
	s1.setXH("125");
	s1.showStudent02();
	system("pause");
	return 0;
}