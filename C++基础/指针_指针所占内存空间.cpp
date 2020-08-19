#include<iostream>
using namespace std;

int main61() {
	int a = 10;
	int* p = &a;
	cout << "sizeof (int) * = " << sizeof(int*) << endl; //或写sizeof(p)
	cout << "sizeof (int) * = " << sizeof(float*) << endl; 
	cout << "sizeof (int) * = " << sizeof(double*) << endl; 
	cout << "sizeof (int) * = " << sizeof(char*) << endl;	//以上都为8bit，我是64bit，32bit则是4bit。

	system("pause");

	return 0;
}