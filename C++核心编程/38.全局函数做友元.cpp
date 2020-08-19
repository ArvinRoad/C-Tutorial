#include<iostream>
using namespace std;
#include<string>

class Building {
	friend void goodGay(Building* building);	//goodGay全局函数有权访问该类的私有成员
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;	//客厅

private:
	string m_BedRoom;	//卧室
};

void goodGay(Building *building) {	//引用&访问或*指针访问都可以
	cout << "goodGay全局函数调用正在访问：" << building->m_SittingRoom << endl;
	//cout << "goodGay全局函数调用正在访问：" << building->m_BedRoom << endl;	//报错，没有权限访问
	cout << "goodGay全局函数调用正在访问：" << building->m_BedRoom << endl;

}
void test24() {
	Building building;
	goodGay(&building);
}

int main38() {
	test24();
	system("pause");
	return 0;
}