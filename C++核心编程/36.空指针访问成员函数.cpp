#include<iostream>
using namespace std;

class Person15 {	//空指针调用成员函数
public:
	void showClassName() {
		cout << "This is Parson Class" << endl;
	}
	void showPersonAge() {
		if (this == NULL) {	//如果用到this指针，需要加以判断保证代码的健壮性，预防空指针，防止破坏。
			return;
		}
		cout << "AGE为：" << this->m_Age << endl;
	}
	int m_Age;
};

void test21() {
	Person15* p = NULL;
	p->showClassName();	//正常运行，C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
	//p->showPersonAge();	//报错，p为NULL所以无法访问。
}

int main36() {
	test21();
	system("pause");
	return 0;
}