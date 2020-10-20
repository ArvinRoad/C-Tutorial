#include<iostream>
using namespace std;

int myAdd4(int a, int b) { return a + b; }	//普通加法函数
template<typename T>
T myAdd4a1(T a, T b) { return a + b; }
void test4() {int a = 10, b = 20;char c = 'c';cout << myAdd4(a, c) << endl;}	//a-97 c-99 10+99 =109
void test4a1() { int a = 10;char c = 'c';cout << myAdd4a1<int>(a, c) << endl; }
//void test4a1() { int a = 10, b = 20;char c = 'c';cout << myAdd4a1(a, c) << endl; }	//报错，系统无法统一化
int main4() {
	test4();
	system("pause");
	return 0;
}