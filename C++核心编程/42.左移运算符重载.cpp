#include<iostream>
using namespace std;

class Person18 {
	/*void operator<<(cout) {	//左移运算符重载函数，成员函数
		
	}*/
	friend ostream& operator<<(ostream& cout, Person18 p);	//如果属性是私有成员，我们利用友元技术解决问题
public:
	Person18(int a, int b) {	//解决test28的函数问题
		M_A = a; M_B = b;
	}
private:
	int M_A, M_B;
};
/* ostream是标准输出流类，左键到定义查看所属类，全局只能有一个，所以使用引用“&”方式 */
ostream & operator<<(ostream &cout,Person18 p) {	//本质：operator << (cout,p); 简化：cout << p;
	cout << "M_A = " << p.M_A << " M_B = " << p.M_B;
	return cout;

}

void test28() {
	Person18 p(10,10);
	//p.M_A = 10; p.M_B = 10;
	//cout << "p.M_A:" << p.M_A << endl; cout << "p.M_B:" << p.M_B << endl;
	//cout << p;	//报错，程序函数为定义。系统不知道如何执行
	//cout << p << endl;	//加endl报错
	cout << p;
	cout << p << endl;	//使用链式编程思想，创建ostream类函数
}

int main42() {
	test28();
	system("pause");
	return 0;
}