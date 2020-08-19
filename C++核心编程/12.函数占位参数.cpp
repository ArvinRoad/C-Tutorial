#include<iostream>
using namespace std;

//目前阶段的占位参数我们还用不到，后面的课程中会用到，占位参数还可以有默认参数比如：int = 10；
void func06(int a,int){	//占位参数格式：返回类型 函数名 (数据类型){ }
	cout << "this is func" << endl;
}

int main12() {
	func06(10,5);	//不能不写5，因为占位参数已经声明
	system("pause");
	return 0;
}