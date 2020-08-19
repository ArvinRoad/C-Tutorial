#include<iostream>
using namespace std;

int main24() {

	//在屏幕中打印0~9十个数值
	int A = 0; int B = 0;
	cout << "A = " << A << endl;

	A++;
	cout << "A = " << A << endl;	//利用++自增到9

	//利用循环到9
	while (B < 10) {
		cout << "B = " << B << endl;
		B++;
	}

	system("pause");

	return 0;
}