#include<iostream>
using namespace std;
#include<string>

class Building03;
class GoodGay02 {
public:
	GoodGay02();
	void visit03();	//��visit�������Է���Building�е�˽�г�Ա
	void visit04();	//��visit02���������Է���Building�е�˽�г�Ա
	Building03* building;
};
class Building03 {
	friend void GoodGay02::visit03();
public:
	Building03();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building03::Building03() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay02::GoodGay02() {
	building = new Building03;
}
void GoodGay02::visit03() {
	cout << "Visit03�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "Visit03�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay02::visit04() {
	cout << "Visit04�������ڷ��ʣ�" << building->m_SittingRoom << endl;
}
void test26() {
	GoodGay02 Gg;
	Gg.visit03();
	Gg.visit04();
}

int main40() {
	test26();
	system("pause");
	return 0;
}