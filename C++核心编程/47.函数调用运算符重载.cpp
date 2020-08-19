#include<iostream>
using namespace std;
#include<string>

class MyPrint {	//打印输出类
public:
	void operator()(string test) {	//重载函数调用运算符,传入一个参数
		cout << test << endl;
	}
};
class MyAdd {	//加法类，仿函数非常灵活，没有固定写法。仿函数会依照我们的需求，我们写需要的仿函数
public:
	int operator()(int num,int num2) {	//传入两个参数
		return num + num2;
	}
};

void MyPerint02(string test) {	//函数
	cout << test << endl;
}
void test35(){
	MyPrint myPerint;
	myPerint("Hello C++ World!");	//函数？？？。其实是仿函数
	MyPerint02("Hello Java World");	//函数调用
}
void test36() {
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "MyAdd返回值为：" << ret << endl;
	cout << MyAdd()(100, 100) << endl;	//匿名对象。用完自动释放MyAdd()是匿名对象重载了仿函数，成为匿名函数对象
}

int main47() {
	test35();
	test36();
	system("pause");
	return 0;
}