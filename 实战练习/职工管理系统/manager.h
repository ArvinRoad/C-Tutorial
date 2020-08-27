/*
	经理类头文件
*/

#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"

class Manager :public Worker {
public:
	Manager(int id, string name, int dId);
	virtual void showInfo();
	virtual string getDeptName();
	~Manager();
};