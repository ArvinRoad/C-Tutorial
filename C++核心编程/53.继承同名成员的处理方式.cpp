#include<iostream>
using namespace std;

class Base04 {
public:
	Base04() {
		M_A = 100;
	}
	void func11() {	//函数
		cout << "Base - func()调用！" << endl;
	}
	void func11(int a) {
		cout << "Base - func(int a)调用!" << endl;
	}
	int M_A;
};
class Son05 :public Base04 {
public:
	Son05() {
		M_A = 200;
	}
	void func11() {	//函数
		cout << "Son - func()调用！" << endl;
	}
	void func11(int a) {
		cout << "Son - func(int a)调用!" << endl;
	}
	int M_A;
};

void test44(){	//属性处理
	Son05 s;
	cout << "Son:M_A的值为：" << s.M_A << endl;	//输出子类的属性值
	cout << "Base:M_A的值为：" << s.Base04::M_A << endl;	//输出父类的属性值
}
void test45() {	//函数处理
	Son05 s;
	s.func11();	//调用子类函数
	s.Base04::func11();	//调用父类函数
	s.func11(100);	//调用子类重载函数
	s.Base04::func11(100);	//调用父类重载函数
}

int main53() {
	test44();
	test45();
	system("pause");
	return 0;
}