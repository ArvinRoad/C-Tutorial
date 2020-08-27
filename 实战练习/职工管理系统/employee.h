/*
	普通职工类头文件
*/

#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"

class Employee :public Worker {
public:
	Employee(int id,string name,int dId);
	virtual void showInfo();
	virtual string getDeptName();
	~Employee();
};