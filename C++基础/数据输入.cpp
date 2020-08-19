#include<iostream>
using namespace std;
#include<string>

int main7() {

	//整型输入
	
	int a = 0;
	cout << "请给整型变量A进行操作：" << endl;
	cin >> a;
	cout << "整型变量A为：" << a << endl;

	//浮点型输入

	float f = 3.14F;
	cout << "请给浮点变量F进行操作：" << endl;
	cin >> f;
	cout << "浮点变量F为：" << f << endl;

	//字符型输入

	char ch = 'a';
	cout << "请给字符变量CH进行操作：" << endl;
	cin >> ch;
	cout << "字符变量CH为：" << ch << endl;

	//字符串型输入

	string str = "Hello C++";
	cout << "请给字符串变量STR进行操作：" << endl;
	cin >> str;
	cout << "字符串变量为：" << str << endl;

	//布尔型输入

	bool b = true;
	cout << "请给布尔变量B进行操作：" << endl;
	cin >> b;
	cout << "布尔变量为：" << b << endl;

	//输出全部
	cout << "整型、浮点、字符、字符串、布尔变量分别为：" << a << f << ch << str << b << endl;

	system("pause");

	return 0;
}