#include<iostream>
using namespace std;

int main61() {
	int a = 10;
	int* p = &a;
	cout << "sizeof (int) * = " << sizeof(int*) << endl; //��дsizeof(p)
	cout << "sizeof (int) * = " << sizeof(float*) << endl; 
	cout << "sizeof (int) * = " << sizeof(double*) << endl; 
	cout << "sizeof (int) * = " << sizeof(char*) << endl;	//���϶�Ϊ8bit������64bit��32bit����4bit��

	system("pause");

	return 0;
}