#include<iostream>
using namespace std;

int main5() {
	int a = 10;
	int& b = a;	//创建引用：a内存起别名为b
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}