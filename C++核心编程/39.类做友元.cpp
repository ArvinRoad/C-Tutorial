#include<iostream>
using namespace std;
#include<string>

class Building02;
class GoodGay {
public:
	GoodGay();
	void visit();	//参观函数，访问Building02中的属性
	Building02* building;
};
class Building02 {
	friend class GoodGay;
public:
	Building02();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//类外写成员函数
Building02::Building02() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay() {
	building = new Building02;
}

void GoodGay::visit() {
	cout << "GoodGay正在访问：" << building->m_SittingRoom << endl;
	cout << "GoodGay正在访问：" << building->m_BedRoom << endl;
}
void test25() {
	GoodGay Gg;
	Gg.visit();
}

int main39() {
	test25();
	system("pause");
	return 0;
}