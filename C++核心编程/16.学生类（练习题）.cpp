#include<iostream>
using namespace std;
#include<string>
class Student {
public:
	string name; string x_Hao;
	void Fft() {
		cout << "请输入您的姓名：" << "";
		cin >> name;
		cout << "请输入您的学号：" << "";
		cin >> x_Hao;
		cout << endl;
		cout << "您的姓名为：" << name << endl;
		cout << "您的学号为：" << x_Hao << endl;
	}
};
int main16() {
	Student s1;
	s1.Fft();
	system("pause");
	return 0;
}