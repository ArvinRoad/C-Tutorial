/*
	经理类源代码文件
*/

#include"manager.h"

Manager::Manager(int id, string name, int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Manager::showInfo() {
	cout << "职工编号：" << this->M_ID
		<< "\t职工姓名：" << this->M_Name
		<< "\t职工岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并下发任务给普通员工" << endl;
}

string Manager::getDeptName() {
	return string("项目经理");
}

Manager::~Manager() {

}