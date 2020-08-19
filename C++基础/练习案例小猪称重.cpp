#include<iostream>
using namespace std;

int main21() {

	//if测试训练

	/*有三只小猪A\B\C,请分别输入三只小猪的体重，并判断那只最重*/

	int A, B, C;
	A = 0; B = 0; C = 0;
	
	cout << "请输入小猪A的体重：" << endl;
	cin >> A;
	cout << "请输入小猪B的体重：" << endl;
	cin >> B;
	cout << "请输入小猪C的体重：" << endl;
	cin >> C;

	if (A>B){
		if (A>C)
		{
			cout << "小猪A最重" << endl;
		}else {
			cout << "小猪C最重" << endl;
		}
	}else {
		if (B>C){
			cout << "小猪B最重" << endl;
		}else{
			cout << "小猪C最重" << endl;
		}
	}

	cout << "小猪A的体重为：" << A << endl;
	cout << "小猪B的体重为：" << B << endl;
	cout << "小猪C的体重为：" << C << endl;

	system("pause");

	return 0;
}