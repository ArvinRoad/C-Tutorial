#include<iostream>
using namespace std;
#include<string>
class Student {
public:
	string name; string x_Hao;
	void Fft() {
		cout << "����������������" << "";
		cin >> name;
		cout << "����������ѧ�ţ�" << "";
		cin >> x_Hao;
		cout << endl;
		cout << "��������Ϊ��" << name << endl;
		cout << "����ѧ��Ϊ��" << x_Hao << endl;
	}
};
int main16() {
	Student s1;
	s1.Fft();
	system("pause");
	return 0;
}