/*
	�ϰ���Դ�����ļ�
*/

#include"boss.h"

Boss::Boss(int id,string name,int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Boss::showInfo() {
	cout << "ְ����ţ�" << this->M_ID
		<< "\tְ��������" << this->M_Name
		<< "\tְ����λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName() {
	return string("��˾�ϰ�");
}

Boss::~Boss() {

}