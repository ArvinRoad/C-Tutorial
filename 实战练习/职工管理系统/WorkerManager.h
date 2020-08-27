/*
	管理类头文件
*/

#pragma once	//防止头文件重复包含
#include<iostream>	//包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include"Worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();	//构造函数
	void show_Menu();	//展示用户菜单函数
	void exitSystem();	//退出系统函数
	int M_EmpNum;		//记录职工人数
	Worker** M_EmpArray;//职工数组指针
	void Add_Emp();		//添加职工
	void save();		//数据持久化，保存文件
	bool M_FileIsEmp;	//判断文件是否为空,标志
	int get_EmpNum();	//统计文件中的人数，标志
	void init_Emp();	//初始化数组(员工)
	void Show_Emp();	//显示职工信息
	void Del_Emp();		//删除离职职工
	int IsExist(int id);//判断用户是否存在
	void Mod_Emp();		//修改职工
	void Find_Emp();	//查找职工
	void Sort_Emp();	//按编号排序
	void Clen_File();	//清空文件
	~WorkerManager();	//析构函数
};