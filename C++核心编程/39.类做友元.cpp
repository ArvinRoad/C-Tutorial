#include<iostream>
using namespace std;
#include<string>

class Building02;
class GoodGay {
public:
	GoodGay();
	void visit();	//�ιۺ���������Building02�е�����
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

//����д��Ա����
Building02::Building02() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay() {
	building = new Building02;
}

void GoodGay::visit() {
	cout << "GoodGay���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "GoodGay���ڷ��ʣ�" << building->m_BedRoom << endl;
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