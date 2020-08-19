#include<iostream>
using namespace std;

int main19() {

	int A = 0;

	/*大于600为一本大学，大于500二本大学，大于400三本大学，都不符合则失败*/
	cout << "请输入您的分数" << endl;
	cin >> A;
	cout << "您的分数为："<<A << endl;

	if (A>=600){
		cout << "恭喜您考上一本大学" << endl;
	}else if(A>=500){
		cout << "恭喜您考上二本大学" << endl;
	}else if (A > 400) {
		cout << "恭喜您考上三本大学" << endl;
	}
	else{
		cout << "再接再厉" << endl;
	}
	system("pause");

	return 0;
}