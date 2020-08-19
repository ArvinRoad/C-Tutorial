#include<iostream>
using namespace std;
/*对象的初始化和清理*/
class Person03 {
public:
	Person03() {	//构造函数 进行初始化操作
		cout << "Person的构造函数调用" << endl;
	}
	~Person03(){	//析构函数 进行清理操作
		cout << "Person的析构函数调用" << endl;
	}
};

void test05() {
	Person03 p;	//在栈上的数据，test05执行完毕后就会释放这个对象，销毁前会自动调用析构函数
}

int main25() {
	test05();
	Person03 p;	//Main函数结束后才释放，所以在结束程序时才会调用Main函数的析构
	system("pause");
	return 0;
}