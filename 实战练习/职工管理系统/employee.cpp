/*
	普通员工类源代码文件
*/

#include"employee.h"

Employee::Employee(int id, string name, int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Employee::showInfo() {
	cout << "职工编号：" << this->M_ID
		<< "\t职工姓名：" << this->M_Name
		<< "\t职工岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDeptName() {
	return string("普通员工");
}
Employee::~Employee() {

}