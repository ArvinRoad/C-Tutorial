#include<iostream>
using namespace std;
//引用作为重载条件
void func08(int &a) {	//属于类型不同。int &a = 10;不合法
	cout << "func (int &a) 的调用" << endl;
}

void func08(const int & a) {	//const int &a = 10;合法
	cout << "func (const int &a) 的调用" << endl;
}
//函数重载碰到默认参数
void func09(int a) {
	cout << "func09 (int a) 的调用" << endl;
}
/*void func09(int a,int b = 10) {	//报错，上面可以调，下面可以调。出现二义性，不可运行
	cout << "func09 (int a,int b = 10) 的调用" << endl;
}*/

int main14() {
	int a = 10;
	func08(a);	//调用不加Const的，a本身是变量，Const是只读状态。
	func08(10);	//10为常量，所以调用Const
	func09(10);
	func09(10);
	//func09(10, 20); 修复报错可以运行
	system("pause");
	return 0;
}