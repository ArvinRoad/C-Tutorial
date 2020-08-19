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
	int getAge() {	//获取年龄，可读可写，如果想修改它（年龄的范围必须是0~150之间）
		return m_Age02;
	}
	void setAge(int setage) {	//设置年龄，有效性验证
		if (setage < 0 || setage>150) {
			cout << "您输入的数值有误！" << endl;
			return;
		}
		m_Age02 = setage;
	}
	void setLove(string setlove) {	//设置情人
		m_Love = setlove;
	}
private:	//属性，私有权限
	string name;	//可读可写
	int m_Age02;	//可读可写
	string m_Love;	//可写
};

int main22() {
	Person02 p;
	p.setName03("张三");
	cout << "姓名为：" << p.getName() << endl;
	p.setAge(150);
	cout << "年龄为：" << p.getAge() << endl;
	p.setLove("李莉");
	//cout << "情人：" << p.setLove << endl;	//报错，只可写入不可读取
	system("pause");
	return 0;
}