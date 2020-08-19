#include<iostream>
using namespace std;
#include<string>
class Student01 {
public:
	string name;
	int m_XH;
	void showStudent() {	//打印函数
		cout << "姓名:" << name << endl;
		cout << "学号" << m_XH << endl;
	}
};
int main17() {
	Student01 s2;
	Student01 s3;
	s2.name = "张三";
	s2.m_XH = 125;
	s2.showStudent();
	s3.name = "李四";
	s3.m_XH = 124;
	s3.showStudent();
	system("pause");
	return 0;
}