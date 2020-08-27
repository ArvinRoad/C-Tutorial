/*
	老板类头文件
*/

#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"

class Boss :public Worker {
public:
	Boss(int id, string name, int dId);
	virtual void showInfo();
	virtual string getDeptName();
	~Boss();
};