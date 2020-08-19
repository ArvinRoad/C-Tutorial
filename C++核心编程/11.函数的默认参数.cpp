#include<iostream>
using namespace std;

/*语法：返回值类型 函数名 (形参=默认值……){实现体} */
int func04(int a, int b = 20, int c = 30) {	//如果我们自己传入了数据，就有自己的数据，如果没有，那么用默认值。1.
	return a + b + c;
}
int func05(int a = 10, int b = 10);
/*
	注意事项：
	1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值，否则报错。
	2.如果函数声明有默认值，函数实现就不能有默认参数了。(声明和实现只能一个有默认参数)
*/
int main11() {
	cout << func04(10,30) << endl;
	cout << func05(10, 10) << endl;
	system("pause");
	return 0;
}
int func05(int a, int b) {
	return a+b;
}
/*int func05(int a = 10, int b = 10) {	错误代码：重定义默认参数
	return a + b;
}*/