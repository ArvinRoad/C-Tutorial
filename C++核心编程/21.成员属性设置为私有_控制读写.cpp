#include<iostream>
using namespace std;
#include<string>
class Person02 {
public:
	void setName03(string setName) {	//设置姓名可写,提供公共函数，侧面的去赋值姓名
		name = setName;
	}
	string getName() {	//获取姓名，不可写入
		return name;
	}
	int getAge() {	//获取年龄，只读
		m_Age = 18;	//初始化为0岁
		return m_Age;
	}
	void setLove(string setlove) {
		m_Love = setlove;
	}
private:	//属性，私有权限
	string name;	//可读可写
	int m_Age;	//可读
	string m_Love;	//可写
};

int main21() {
	Person02 p;
	p.setName03("张三");
	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;
	p.setLove("李莉");
	//cout << "情人：" << p.setLove << endl;	//报错，只可写入不可读取
	system("pause");
	return 0;
}