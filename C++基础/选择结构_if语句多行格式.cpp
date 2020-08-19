#include<iostream>
using namespace std;

int main18() {

	int A;
	A = 0;

	cout << "请输入您的分数：" << endl;
	cin >> A;
	cout << "您的分数为：" << A << endl;

	if (A>=600){
		cout << "恭喜您考上一本大学！" << endl;
	}else{
		cout << "很遗憾，请再接再厉!" << endl;
	}

	system("pause");

	return 0;
}