/*
	ְ��������ļ�
*/

#pragma once
#include<iostream>
using namespace std;
#include<string>

class Worker {
public:
	virtual void showInfo() = 0;	//��ʾ������Ϣ
	virtual string getDeptName() = 0;	//��ȡ��λ����

	int M_ID;
	string M_Name;
	int M_DeptId;
};