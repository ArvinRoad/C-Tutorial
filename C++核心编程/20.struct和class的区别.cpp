#include<iostream>
using namespace std;

class C1 {	//class:默认权限为私有权限
	int m_A;
};

struct C2 {	//struct:默认权限为公共权限
	int m_A;
};

int main20() {
	C1 c1;
	C2 c2;
	//c1.m_A = 100;	//报错，访问权限为私有
	c2.m_A = 100;		//默认权限为公共
	system("pause");
	return 0;
}