/*
	��ͨԱ����Դ�����ļ�
*/

#include"employee.h"

Employee::Employee(int id, string name, int dId) {
	this->M_ID = id;
	this->M_Name = name;
	this->M_DeptId = dId;
}

void Employee::showInfo() {
	cout << "ְ����ţ�" << this->M_ID
		<< "\tְ��������" << this->M_Name
		<< "\tְ����λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}

string Employee::getDeptName() {
	return string("��ͨԱ��");
}
Employee::~Employee() {

}