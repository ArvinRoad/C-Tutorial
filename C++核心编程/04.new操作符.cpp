#include<iostream>
using namespace std;

//new的基本语法
int* func() {
	int* p = new int(10);	//在堆区创建整型变量数据，new返回是该数据类型指针
	return p;

}
void test01() {
	int* p = func();
	cout << *p << endl;	//堆区的数据由程序员管理开辟，程序员管理释放
	delete p;	//如果想释放堆区的数据利用关键字delete
	//cout << *p << endl;	//内存已经释放，如果再次访问就是非法操作
}

void test02() {//在堆区开启一个数组
	int *arr = new int[10];	//创建10个整型数据的数组，在堆区。10代表数组有10个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;	//给10个元素赋值100~109
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	delete[]arr;	//释放数组，释放数组时要加中括号才能释放
}

int main4() {
	test01();
	test02();
	system("pause");
	return 0;
}