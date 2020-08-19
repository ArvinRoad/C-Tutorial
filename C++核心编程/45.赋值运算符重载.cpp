#include<iostream>
using namespace std;

class Person20 {
public:
	Person20(int age) {
		M_Age = new int(age);	//创建堆区，M_Age进行数据维护
	}
	~Person20(){
		if (M_Age != NULL) {
			delete M_Age;
			M_Age = NULL;
		}
	}
	Person20& operator=(Person20& p) {
		//M_Age = p.M_Age;	//编译器提供的浅拷贝
		if (M_Age != NULL) {	//先判断sh
			delete M_Age;
			M_Age = NULL;
		}
		M_Age = new int(*p.M_Age);
		return *this;	//返回自身本身
	}
	int* M_Age;	//创建指针变量
};

void test33() {
	Person20 P1(18);
	Person20 P2(20);
	Person20 P3(30);
	//P3 = P2 = P1;	//赋值操作,解决方案在return *this,须返回引用
	P3 = P2 = P1;	//赋值运算
	cout << "PersonP1的AGE为：" << *P1.M_Age << endl;	//解引用查看数据值
	cout << "PersonP2的AGE为：" << *P2.M_Age << endl;
	cout << "PersonP3的AGE为：" << *P3.M_Age << endl;
}

int main45() {
	//test33();
	int a = 10, b = 20, c = 30;
	c = b = a;
	cout << "a = " << a << endl; cout << "b = " << b << endl; cout << "c = " << c << endl;
	system("pause");
	return 0;
}