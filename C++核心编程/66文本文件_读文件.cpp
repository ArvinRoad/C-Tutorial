#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test59() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {	//判断文件是否打开成功
		cout << "文件打开错误！报错码：5010" << endl;
		return;
	}
	/*第一种读取方式*/
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	ifs.close();*/
	/*第二种读取方式,参数二：sizeof(buf)也可以写成1024*/
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))){
		cout << buf << endl;
	}*/
	/*第三种读取方式*/
	/*string buf;
	while (getline(ifs,buf)){
		cout << buf << endl;
	}*/
	/*第四种方式，不推荐使用(一个字符一个字符读取)*/
	char c;
	while ((c=ifs.get())!= EOF) {	//EOF end of File
		cout << c;
	}
}

int main66() {
	test59();
	system("pause");
	return 0;
}