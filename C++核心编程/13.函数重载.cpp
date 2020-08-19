#include<iostream>
using namespace std;

void func07() {
	cout << "func的调用" << endl;
}
void func07(int a) {
	cout << "func (int a) 的调用" << endl;
}
void func07(double a) {
	cout << "func (double a) 的调用" << endl;
}
void func07(int a,double b) {
	cout << "func (int a double b) 的调用" << endl;
}
void func07(double a, int b) {
	cout << "func (double a int b) 的调用" << endl;
}
//int func07(double b, int a) {}	//报错，函数的返回值不可以作为函数的重载条件

int main13() {
	func07();
	func07(10);
	func07(3.14);
	func07(10,3.15);
	func07(3.14,20);
	system("pause");
	return 0;
}