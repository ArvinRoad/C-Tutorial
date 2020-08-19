#include<iostream>
using namespace std;

int* func02() {
	//指针本质也是局部变量，也是放在栈上，指针保存的数据是放在了堆区。堆区的数据的地址编号用栈上的指针保存，当我们解引用同上解出这个数据
	int* p = new int(10);	//利用new关键字，可以将数据开辟到堆区。堆区数据一直存活除非工程师释放或程序运行生命周期完
	return p;
}

int main3() {
	int* p = func02();
	cout << *p << endl;
	system("pause");
	return 0;
}