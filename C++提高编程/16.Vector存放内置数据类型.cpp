#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test16() {
	vector<int> v;	//和MyArray<int> p; 一样
	//向容器插入数据
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	vector<int>::iterator itBegin = v.begin();	//通过迭代器访问容器中的数据，v.begin();是起始迭代器指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();	//结束迭代器，指向容器中最后一个元素下一个位置
	while (itBegin!=itEnd){	//第一种遍历方式
		cout <<"第一种遍历方式:"<< *itBegin << endl;
		itBegin++;
	}
}
void test16a1() {	//第二种遍历方式
	vector<int> v;
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << "第二种遍历方式:" << *it << endl;
	}
}
void myPerint(int val) {
	cout << "第三种遍历方式：" << val << endl;
}
void test16a2() {	//第三种遍历方式，利用STL提供遍历算法
	vector<int> v;
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	for_each(v.begin(),v.end(),myPerint);	//利用回调原理
}

int main16() {
	test16();
	test16a1();
	test16a2();
	system("pause");
	return 0;
}