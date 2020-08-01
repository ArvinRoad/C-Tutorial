#include<iostream>
using namespace std;

int main20() {

	int A = 0;

	cout << "请输入您的成绩：" << endl;
	cin >> A;
	cout << "您的成绩为：" << A << endl;

	if (A >= 600) {
		cout << "恭喜您考入一本" << endl;
	}else if(A>=500){
		cout << "恭喜你考入二本" << endl;
	}else if (A > 400) {
		cout << "恭喜你考入三本" << endl;
	}else {
		cout << "请再次输入您的成绩：" << endl;
		cin >> A;

		if (A<=400){
			cout << "很遗憾，请再接再厉！" << endl;
		}else {
			cout << "请重新启动程序" << endl;
		}
	}

	system("pause");

	return 0;
}