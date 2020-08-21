#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test58() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
	ofs.close();
}


int main65() {
	test58();
	system("pause");
	return 0;
}