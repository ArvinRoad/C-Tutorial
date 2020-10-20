#include<iostream>
using namespace std;
#include<string>

void test19() {	//string的构造函数
	string s1;	//默认构造,string（）；	创建一个空的字符串，例如string str；

	const char* str = "Hello World";	//string（const char* s）；使用字符串s初始化
	string s2(str);
	cout << "S2 = " << s2 << endl;

	string s3(s2);	//string（const string str）；	使用字符串s初始化(类似拷贝构造)
	cout << "S3 = " << s3 << endl;

	string s4(10, 'a');		//输出10个a string（int n,char c);	使用n个字符c初始化
	cout << "S4 = " << s4 << endl;
}

int main19() {
	test19();
	system("pause");
	return 0;
}