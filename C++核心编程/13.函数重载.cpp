#include<iostream>
using namespace std;

void func07() {
	cout << "func�ĵ���" << endl;
}
void func07(int a) {
	cout << "func (int a) �ĵ���" << endl;
}
void func07(double a) {
	cout << "func (double a) �ĵ���" << endl;
}
void func07(int a,double b) {
	cout << "func (int a double b) �ĵ���" << endl;
}
void func07(double a, int b) {
	cout << "func (double a int b) �ĵ���" << endl;
}
//int func07(double b, int a) {}	//���������ķ���ֵ��������Ϊ��������������

int main13() {
	func07();
	func07(10);
	func07(3.14);
	func07(10,3.15);
	func07(3.14,20);
	system("pause");
	return 0;
}