/*
	������Դ�����ļ�
*/

#include"manager.h"

Manager::Manager(int id, string name, int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Manager::showInfo() {
	cout << "ְ����ţ�" << this->M_ID
		<< "\tְ��������" << this->M_Name
		<< "\tְ����λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲��·��������ͨԱ��" << endl;
}

string Manager::getDeptName() {
	return string("��Ŀ����");
}

Manager::~Manager() {

}