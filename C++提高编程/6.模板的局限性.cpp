#include<iostream>
using namespace std;
#include<string>

class Person6{public:string M_name;int M_age;Person6(string name,int age) { this->M_name = name;this->M_age = age; }};
template<typename T>
bool myCompare6(T& a, T& b) {if (a == b) {return true;}else {return false;}}
void test6() { int a = 10, b = 20;bool ret = myCompare6(a, b);if (ret) { cout << "a == b" << endl; } else { cout << "a != b" << endl; } }
template<>bool myCompare6(Person6& p1, Person6& p2) {	//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
	if (p1.M_name == p2.M_name && p1.M_age == p2.M_age) { return true; }
	else { return false; }
}
void test6a1() { Person6 p1("Tom", 10);Person6 p2("Tom", 10);bool ret = myCompare6(p1, p2); if (ret) { cout << "p1 == p2" << endl; } 
else { cout << "p1 != p2" << endl; }}	//�����������һ(����),���������(�ṩһ��Person�����ͽ��)


int main6() {
	test6();
	test6a1();
	system("pause");
	return 0;
}