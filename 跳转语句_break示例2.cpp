#include<iostream>
using namespace std;

int main33() {
	//循环语句
	for (int num = 0; num < 10; num++) {
		if (num == 5){
			break;	//只打印出到4
		}
		cout << num << endl;
	}

	system("pause");

	return 0;
}