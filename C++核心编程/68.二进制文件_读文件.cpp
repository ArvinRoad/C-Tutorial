#include<iostream>
using namespace std;
#include<fstream>

class Person23 {
public:
	char M_Name[64];
	int M_Age;
};

void test61() {
	ifstream ifs;
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ��򿪴��󣡱����룺5010" << endl;
		return;
	}
	Person23 p;
	ifs.read((char*)&p, sizeof(Person23));
	cout << "������" << p.M_Name << endl;
	cout << "���䣺" << p.M_Age << endl;
	ifs.close();
}

int main() {
	test61();
	system("pause");
	return 0;
}