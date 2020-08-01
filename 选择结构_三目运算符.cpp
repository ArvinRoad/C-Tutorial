#include<iostream>
using namespace std;

int main22() {

	int A, B, C;
	A = 10; B = 20; C = 0;

	C = (A > B ? A : B);

	cout << "C = " << C << endl;

	(A > B ? A : B) = 100;	//¸³Öµ
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	system("pause");

	return 0;
}