/*
	管理类源代码文件
*/

#include"WorkerManager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


WorkerManager::WorkerManager() {
	ifstream ifs;	//1.文件不存在情况
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		//cout << "文件不存在，错误码：WJ001" << endl;
		this->M_EmpNum = 0;	//初始化记录人数为0
		this->M_EmpNum = NULL;	//初始化数组指针为空
		this->M_FileIsEmp = true;	//初始化文件是否为空
		ifs.close();
		return;
	}
	char ch;	//2.文件存在数据为空情况
	ifs >> ch;
	if (ifs.eof()) {	//新函数，判断文件是否为空
		//cout << "文件为空，警告码：JG001" << endl;
		this->M_EmpNum = 0;	//初始化记录人数为0
		this->M_EmpNum = NULL;	//初始化数组指针为空
		this->M_FileIsEmp = true;	//初始化文件是否为空
		ifs.close();
		return;
	}
	int num = this->get_EmpNum();	//3.文件存在，并且记录数据情况
	//cout << "职工人数为:" << num << endl;
	this->M_EmpNum = num;
	this->M_EmpArray = new Worker * [this->M_EmpNum];	//开辟空间
	this->init_Emp();	//将文件数据存到数组中
}

void WorkerManager::show_Menu() {
	cout << "*******************************" << endl;
	cout << "**** 欢迎使用职工管理系统！****" << endl;
	cout << "******* 0. 退出管理程序 *******" << endl;
	cout << "******* 1. 增加职工信息 *******" << endl;
	cout << "******* 2. 显示职工信息 *******" << endl;
	cout << "******* 3. 删除离职职工 *******" << endl;
	cout << "******* 4. 修改职工信息 *******" << endl;
	cout << "******* 5. 查找职工信息 *******" << endl;
	cout << "******* 6. 按照编号排序 *******" << endl;
	cout << "******* 7. 清空所有文档 *******" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);	//退出程序
}

void WorkerManager::Add_Emp() {
	cout << "请输入添加职工数量：";
	int addNum = 0;	//保存用户的输入数量
	cin >> addNum;
	if (addNum > 0) {
		int newSize = this->M_EmpNum + addNum;	//计算添加新空间大小。新空间大小 = 原来记录的人数 + 新增人数
		Worker** newSpace =  new Worker* [newSize];	//开辟新空间
		if (this->M_EmpArray != NULL) {	//将原来空间下数据，拷贝到新空间下
			for (int i = 0; i < this->M_EmpNum; i++) {
				newSpace[i] = this->M_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++) {	//批量添加新数据
			int id;
			string name;
			int dSelect;
			cout << "请输入第" << i + 1 << "位新职工编号：";
			cin >> id;
			cout << "请输入第" << i + 1 << "位新职工姓名：";
			cin >> name;
			cout << "选择该职工岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.项目经理" << endl;
			cout << "3.公司老板" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->M_EmpNum + i] = worker;	//将创建职工信息，保存到数值
		}
		delete[]this->M_EmpArray;	//释放原有空间
		this->M_EmpArray = newSpace;	//更改新空间的指向
		this->M_EmpNum = newSize;	//更新新的职工人数
		this->M_FileIsEmp = false;	//更新职工不为空标志
		this->save();	//数据持久化，保存职工信息
		cout << "成功添加" << addNum << "名新职工" << endl;
	}else {
		cout << "语法错误" << endl;
		return;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);	//写入文件
	for (int i = 0; i < this->M_EmpNum; i++) {	//将每个人数据写入到文件中
		ofs << this->M_EmpArray[i]->M_ID << " "
			<< this->M_EmpArray[i]->M_Name << " "
			<< this->M_EmpArray[i]->M_DeptId << endl;
	}
	ofs.close();
}

int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//打开文件	读取
	int id;
	string name;
	int dId;
	int num = 0;	//统计人数，标志
	while (ifs >> id && ifs >> name && ifs >> dId) {
		num++;
	}
	return num;
}

void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = NULL;
		if (dId == 1) {	//普通职工
			worker = new Employee(id,name,dId);
		}else if (dId == 2) {	//经理
			worker = new Manager(id, name,dId);
		}else {	//公司老板
			worker = new Boss(id, name, dId);
		}
		this->M_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp() {
	if (this->M_FileIsEmp) {
		cout << "文件不存在或者记录为空。报错码：WJG001" << endl;
	}else {
		for (int i = 0; i < M_EmpNum; i++) {
			this->M_EmpArray[i]->showInfo();	//利用多态调用程序接口
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp() {
	if (this->M_FileIsEmp) {
		cout << "文件不存在或记录为空，报错码：WJG001" << endl;
	}else {
		cout << "请输入删除职工编号:";
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) {	//职工存在，并删除
			for (int i = index; i < this->M_EmpNum -1; i++) {	//数据前移
				this->M_EmpArray[i] = this->M_EmpArray[i + 1];
			}
			this->M_EmpNum--;	//更新数组中记录的人员个数
			this->save();
			cout << "删除成功！" << endl;
		}else {
			cout << "删除失败，未找到该职工，报错码：JG002" << endl;
		}
	}
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id) {
	int index = -1;
	for (int i = 0; i < this->M_EmpNum; i++) {
		if (this->M_EmpArray[i]->M_ID == id) {
			index = i;
			break;
		}
	}
	return index;
}

void WorkerManager::Mod_Emp() {
	if (this->M_FileIsEmp) {
		cout << "文件不存在或记录为空，报错码：WJG001" << endl;
	}else {
		cout << "请输入修改职工编号:";
		int id = 0;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1) {
			delete this->M_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelelct = 0;
			cout << "查到:" << id << "号职工，请输入新职工工号:";
			cin >> newId;
			cout << "请输入新姓名:";
			cin >> newName;
			cout << "请输入新岗位:";
			cout << "1.普通职工" << endl;
			cout << "2.项目经理" << endl;
			cout << "3.公司老板" << endl;
			cin >> dSelelct;
			Worker* worker = NULL;
			switch (dSelelct) {
			case 1:
				worker = new Employee(newId, newName, dSelelct);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelelct);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelelct);
				break;
			}
			this->M_EmpArray[ret] = worker;
			this->save();
			cout << "修改成功！" << endl;
		}else {
			cout << "修改失败，未找到该职工，报错码：JG002" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->M_FileIsEmp) {
		cout << "文件不存在或记录为空，报错码：WJG001" << endl;
	}else {
		cout << "请输入查找方式:" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按职工姓名查找" << endl;
		int select;
		cin >> select;
		if (select == 1) {
			int id;
			cout << "请输入查找职工编号:";
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1) {
				cout << "查找成功!该职工信息如下:" << endl;
				this->M_EmpArray[ret]->showInfo();
			}else {
				cout << "查找失败，未找到该职工，报错码：JG002" << endl;
			}
		}else if (select == 2) {
			string name;
			cout << "请输入查找职工姓名:";
			cin >> name;
			bool flag = false;
			for (int i = 0;i < M_EmpNum;i++) {
				if (this->M_EmpArray[i]->M_Name == name) {
					cout << "查找成功!职工编号为"
						<< this->M_EmpArray[i]->M_ID
						<< "的职工信息如下:" << endl;
					this->M_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false) {
				cout << "查找失败，未找到该职工，报错码：JG002" << endl;
			}
		}
		else {
			cout << "语法错误" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp() {
	if (this->M_FileIsEmp) {
		cout << "文件不存在或记录为空，报错码：WJG001" << endl;
		system("pause");
		system("cls");
	}else {
		cout << "请选择排序方式:" << endl;
		cout << "1.按照职工编号升序排列" << endl;
		cout << "2.按照职工编号降序排列" << endl;
		int select;
		cin >> select;
		for (int i = 0;i < this->M_EmpNum;i++) {
			int MinOrMax = i;
			for (int j = i + 1;j < this->M_EmpNum;j++) {
				if (select == 1) {
					if (this->M_EmpArray[MinOrMax]->M_ID > this->M_EmpArray[j]->M_ID) {
						MinOrMax = j;
					}
				}else {
					if (this->M_EmpArray[MinOrMax]->M_ID < this->M_EmpArray[j]->M_ID) {
						MinOrMax = j;
					}
				}
			}
			if (i != MinOrMax) {
				Worker* temp = this->M_EmpArray[i];
				this->M_EmpArray[i] = this->M_EmpArray[MinOrMax];
				this->M_EmpArray[MinOrMax] = temp;
			}
		}
		this->save();
		cout << "排序成功!排序后的结果为:" << endl;
		this->Show_Emp();
	}
}

void WorkerManager::Clen_File() {
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs(FILENAME, ios::trunc);	//删除文件后重建
		ofs.close();
		if (this->M_EmpArray != NULL) {
			for (int i = 0;i < this->M_EmpNum;i++) {
				delete this->M_EmpArray[i];
				this->M_EmpArray[i] = NULL;
			}
			delete[]this->M_EmpArray;	//删除堆区数据指针
			this->M_EmpArray = NULL;
			this->M_EmpNum = 0;
			this->M_FileIsEmp = true;
		}
		cout << "清空成功!" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager() {
	if (this->M_EmpArray != NULL) {
		for (int i = 0;i < this->M_EmpNum;i++) {
			if (this->M_EmpArray[i] != NULL) {
				delete this->M_EmpArray[i];
			}
		}
		delete[]this->M_EmpArray;
		this->M_EmpArray = NULL;
	}
}