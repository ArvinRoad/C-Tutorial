#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Person17 {
public:
	Person17(string name, int age) {
		this->m_Name = name;this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test17a2() {	//����Զ����������� ָ��
	vector<Person17 *> v;
	Person17 p1("aaa", 10);Person17 p2("bbb", 10);Person17 p3("ccc", 10);Person17 p4("ddd", 10);Person17 p5("eee", 10);
	v.push_back(&p1);v.push_back(&p2);v.push_back(&p3);v.push_back(&p4);v.push_back(&p5);	//���������������
	for (vector<Person17 *>::iterator it = v.begin();it != v.end();it++) {	//���������е�����
		cout << "����: " << (*it)->m_Name << "����: " << (*it)->m_Age << endl;
	}
}

int main17a1() {
	test17a2();
	system("pause");
	return 0;
}