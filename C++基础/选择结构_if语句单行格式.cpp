#include<iostream>
using namespace std;

int main17() {

	/*用户输入分数：大于600视为一本大学，否则判定失败*/

	int A; 
	A = 0;

	cout << "请输入您的分数：" << endl;
	cin >> A;
	cout << "您的分数为：" << A << endl;

	if (A>=600){	//if添加后面不能加；分号
		cout << "恭喜您考入一本大学！" << endl;
	}

	system("pause");

	return 0;
}