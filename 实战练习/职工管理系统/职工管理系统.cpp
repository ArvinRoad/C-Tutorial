#include<iostream>
using namespace std;
#include"WorkerManager.h"
#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

int main() {
	WorkerManager wm;	//ʵ���������߶���
	int choice = 0;		//�洢�û���ѡ��

	while (true) {
		wm.show_Menu();		//����չʾ�˵���Ա����
		cout << "����������ѡ��:";
		cin >> choice;

		switch (choice) {
		case 0:
			wm.exitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3: 
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clen_File();
			break;
		default:
			cout << "�﷨�����������������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}