#include<iostream>
using namespace std;

class Person9 {
public:
	void ShowPerson9a1() {
		cout << "����ShowPerson9a1!" << endl;
	}
};
class Person9a1 {
public:
	void ShowPerson9a2() {
		cout << "����ShowPerson9a2!" << endl;
	}
};
template<typename T>
class MyClass9 {
public:
	T obj;
	void func9() { obj.ShowPerson9a1(); }	//��Ա����û�д������������Բ�����
	void func9a1() { obj.ShowPerson9a2(); }
};
void test9() {
	MyClass9<Person9> M;
	M.func9();
	MyClass9<Person9a1> m;
	m.func9a1();
}

int main9() {
	test9();
	system("pause");
	return 0;
}