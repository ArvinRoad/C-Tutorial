#include<iostream>
using namespace std;
//求圆周长公式：2 * PI * 半径

const double PI = 3.14;	//圆周率

class Circle {	//设计一个圆类
public:	//公共访问权限
	int m_r;	//属性：半径(一般用变量)
	double calculateZC() {	//行为：获取圆的周长(一般用函数)
		return 2 * PI * m_r;
	}
};

int main15() {
	Circle c1;	//通过圆类创建一个具体的对象
	c1.m_r = 10;	//给圆对象属性进行赋值，半径等于10
	cout << "圆周长为：" << c1.calculateZC() << endl;	//通过圆对象行为获取圆周长，2*PI*10结果为62.8
	system("pause");
	return 0;
}