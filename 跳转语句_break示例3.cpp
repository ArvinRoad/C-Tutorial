#include<iostream>
using namespace std;

int main34() {
	//Ç¶Ì×Óï¾ä
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;	//ÍË³öÄÚ²ãÑ­»·
			}
			cout << "*";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}