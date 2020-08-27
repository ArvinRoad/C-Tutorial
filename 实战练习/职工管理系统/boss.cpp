/*
	老板类源代码文件
*/

#include"boss.h"

Boss::Boss(int id,string name,int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Boss::showInfo() {
	cout << "职工编号：" << this->M_ID
		<< "\t职工姓名：" << this->M_Name
		<< "\t职工岗位：" << this->getDeptName()
		<< "\t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDeptName() {
	return string("公司老板");
}

Boss::~Boss() {

}