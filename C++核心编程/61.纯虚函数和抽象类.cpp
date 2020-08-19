#include<iostream>
using namespace std;

class Base08 {
public:
	virtual void func11() = 0;	//纯虚函数，这个类称为抽象类。特点：无法实例化对象、子类必须重写父类纯虚函数、
};
class Son08 :public Base08 {
public:
	virtual void func11() { cout << "Func函数调用！" << endl; }
};
class Son09 :public Base08 {
	virtual void func11() { cout << "Func2函数调用！" << endl; }
};

void test55() {
	//Base08 b;	new Base08;	//报错，无法实例化(抽象类)无论栈区还是堆区。
	//Son08 s;	//报错，子类必须重写父类纯虚函数，否则无法实例化对象
	Base08* base = new Son08;
	base->func11();
	delete base;
	base = new Son09;
	base->func11();
	delete base;
}

int main61() {
	test55();
	system("pause");
	return 0;
}