/*
	������ͷ�ļ�
*/

#pragma once	//��ֹͷ�ļ��ظ�����
#include<iostream>	//�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include"Worker.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();	//���캯��
	void show_Menu();	//չʾ�û��˵�����
	void exitSystem();	//�˳�ϵͳ����
	int M_EmpNum;		//��¼ְ������
	Worker** M_EmpArray;//ְ������ָ��
	void Add_Emp();		//���ְ��
	void save();		//���ݳ־û��������ļ�
	bool M_FileIsEmp;	//�ж��ļ��Ƿ�Ϊ��,��־
	int get_EmpNum();	//ͳ���ļ��е���������־
	void init_Emp();	//��ʼ������(Ա��)
	void Show_Emp();	//��ʾְ����Ϣ
	void Del_Emp();		//ɾ����ְְ��
	int IsExist(int id);//�ж��û��Ƿ����
	void Mod_Emp();		//�޸�ְ��
	void Find_Emp();	//����ְ��
	void Sort_Emp();	//���������
	void Clen_File();	//����ļ�
	~WorkerManager();	//��������
};