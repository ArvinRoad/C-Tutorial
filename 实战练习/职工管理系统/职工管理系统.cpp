#include<iostream>
using namespace std;
#include"WorkerManager.h"
#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

int main() {
	WorkerManager wm;	//实例化管理者对象
	int choice = 0;		//存储用户的选项

	while (true) {
		wm.show_Menu();		//调用展示菜单成员函数
		cout << "请输入您的选项:";
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
			cout << "语法输入错误请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");

	return 0;
}