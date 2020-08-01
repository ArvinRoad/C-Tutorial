#include<iostream>
using namespace std;

int main23() {	//23
	
	//给一部电影打分，10~9经典。8~7非常好。6~5一般。5以下差。
	int A = 0;

	cout << "请打分:(最高10分)" << endl;
	cin >> A;	cout << "你打的分数为：" << A << endl;

	switch (A) {
	case 10:
		cout << "评价经典" << endl;
		break;	//退出当前分支
	case 9:
		cout << "评价经典" << endl;
		break;
	case 8:
		cout << "评价非常好" << endl;
		break;
	case 7:
		cout << "评价非常好" << endl;
		break;
	case 6:
		cout << "评价一般" << endl;
		break;
	default:
		cout << "评价差" << endl;
	}

	system("pause");

	return 0;
}