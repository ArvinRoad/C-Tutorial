#include<iostream>
using namespace std;
#include<fstream>

class Person22 {
public:
	char M_Name[64];	//建议使用的C语言的字符串，因为底层是C写的
	int M_Age;
};

void test60() {
	ofstream ofs;
	ofs.open("Person.txt", ios::out | ios::binary);	//二进制方式写入
	Person22 p = { "张三",18 };
	ofs.write((const char *)&p,sizeof(Person22));
	ofs.close();
}

int main67() {
	test60();
	system("pause");
	return 0;
}