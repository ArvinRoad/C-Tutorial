#include<iostream>
using namespace std;

class Person04 {
public:
	Person04() {	//无参构造（默认构造函数）
		cout << "Person的无参构造函数调用" << endl;
	}
	Person04(int a) {
		age = a;
		cout << "Peron的有参构造函数调用" << endl;
	}
	Person04(const Person04 &P) {	//拷贝构造函数：克隆构造
		age = P.age;	//将传入的人身上的所有属性，拷贝到当前对象身上
		cout << "Peron的拷贝构造函数调用" << endl;
	}
	~Person04()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};
void test06() {	//调用
	Person04 p;	//默认调用
	Person04 p2(10);	//括号调用，调用有参构造函数
	Person04 p3(p2);	//括号调用，调用拷贝构造
	cout << "P2的年龄：" << p2.age << endl;	//注意：调用默认构造函数时不要加()
	cout << "P3的年龄：" << p3.age << endl;	//将传入的人身上的所有属性，拷贝到当前对象身上

	Person04 p4 = Person04(10);	//显示调用，调用有参构造
	Person04 p5 = Person04(p4);	//显示调用，调用拷贝构造
	Person04(10);	//匿名对象，创建对象但没有名称。特点：当前行执行结束后系统会立即回收掉匿名对象。

	Person04 p6 = 10;	//隐式调用，相当于 Person p6 = Person(10); 有参构造调用
	Person04 p7 = p6;	//隐式调用，拷贝调用
	
}
int main26() {
	test06();
	system("pause");
	return 0;
}