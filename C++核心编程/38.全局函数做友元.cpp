#include<iostream>
using namespace std;
#include<string>

class Building {
	friend void goodGay(Building* building);	//goodGayȫ�ֺ�����Ȩ���ʸ����˽�г�Ա
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;	//����

private:
	string m_BedRoom;	//����
};

void goodGay(Building *building) {	//����&���ʻ�*ָ����ʶ�����
	cout << "goodGayȫ�ֺ����������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "goodGayȫ�ֺ����������ڷ��ʣ�" << building->m_BedRoom << endl;	//����û��Ȩ�޷���
	cout << "goodGayȫ�ֺ����������ڷ��ʣ�" << building->m_BedRoom << endl;

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