#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test58() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	ofs.close();
}


int main65() {
	test58();
	system("pause");
	return 0;
}