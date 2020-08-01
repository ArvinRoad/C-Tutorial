#include<iostream>
using namespace std;

int main29() {

	for (int A = 1;A<=100;A++){
		if (A % 7 == 0 || A % 10 == 7 || A / 10 == 7)
		{
			cout << "ÇÃ×À×Ó" << endl;
		}else { 
			cout << "A = " << A << endl; 
		}
	}

	system("pause");

	return 0;
}