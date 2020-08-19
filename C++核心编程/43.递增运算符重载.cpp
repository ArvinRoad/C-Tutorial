#include<iostream>
using namespace std;

class MyInteger {	//自定义整型函数
	friend ostream& operator<<(ostream& cont, MyInteger myInt);
public:
	MyInteger() { m_Num = 0; }	//初始化m_Num为0
	MyInteger &operator++() {	//重载前置递增运算符。返回引用是为了一直对一个数据进行递增操作
		m_Num++;
		return *this;	//返回自身
	}
	MyInteger operator++(int) {	//重载后置递增运算符，int代表占位参数，可以用于区分前置和后置递增
		MyInteger temp = *this;	//先记录当时结果
		m_Num++;
		return temp;	//将记录结果返回，后置不要返回引用（返回的是局部的对象引用。当前函数执行完后会被释放。）前置递增返回引用后置递增返回值
	}
private:
	int  m_Num;
};
ostream& operator<<(ostream & cont, MyInteger myInt) {
	cout << myInt.m_Num;
	return cout;
}

void test29(){
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}
void test30() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main43() {
	test29();
	int a = 0;
	cout << ++(++a) << endl;
	cout << a << endl;
	test30();
	system("pause");
	return 0;
}