#include<iostream>
using namespace std;
#include<string>
class Student02 {
public:
	string name;
	string m_XH;
	void showStudent02() {	//打印函数
		cout << "姓名:" << name << endl;
		cout << "学号" << m_XH << endl;
	}
	void setName(string setName) {	//通过行为赋值
		name = setName;
	}
	void setXH(string ID) {
		m_XH = ID;
	}
};
int main18() {
	Student02 s1;
	s1.setName("张三");
	s1.setXH("125");
	s1.showStudent02();
	system("pause");
	return 0;
}