#include<iostream>
using namespace std;

int main6() {
	
	float f1 = 3.14F; //单精度，建议带上F否则程序会认为它是Double（双精度）类型。
	double b1 = 3.1415l;

	cout << "f1 =" << f1 << endl;
	cout << "b1 =" << b1 << endl;
	//默认情况下，输出一个小数。只会显示6位有效数值

	cout << "float 类型所占内存空间大小为：" << sizeof(f1) << endl;
	cout << "double 类型所占内存空间大小为：" << sizeof(double)<< endl;
	
	//科学计算
	float f2 = 3e2; //3*10^2
	cout << "F2 =" << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "F3 =" << f3 << endl;

	
	system("pause");

	return 0;
}