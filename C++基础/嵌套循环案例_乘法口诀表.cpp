#include<iostream>
using namespace std;

int main31() {

	for (int num = 1; num <= 9; num++) {
		for (int sum = 1; sum <= num; sum++) {
			cout << num << "*" << sum << "=" << num * sum << "  ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}