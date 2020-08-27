/*
	职工类基类文件
*/

#pragma once
#include<iostream>
using namespace std;
#include<string>

class Worker {
public:
	virtual void showInfo() = 0;	//显示个人信息
	virtual string getDeptName() = 0;	//获取岗位名称

	int M_ID;
	string M_Name;
	int M_DeptId;
};