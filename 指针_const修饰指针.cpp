#include<iostream>
using namespace std;

int main64() {
	int a = 10, b = 10; 
	const int* p = &a;	//指针指向的值不可以改，指针的指向可以改
	int* const p2 = &a;	//指针指向的值可以改，指针的指向不可以改
	const int* const p3 = &a;	//指针指向的值不可以改，指针的指向也不可以改

	system("pause");

	return 0;
}