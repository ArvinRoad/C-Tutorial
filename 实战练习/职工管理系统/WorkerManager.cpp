/*
	������Դ�����ļ�
*/

#include"WorkerManager.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


WorkerManager::WorkerManager() {
	ifstream ifs;	//1.�ļ����������
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open()) {
		//cout << "�ļ������ڣ������룺WJ001" << endl;
		this->M_EmpNum = 0;	//��ʼ����¼����Ϊ0
		this->M_EmpNum = NULL;	//��ʼ������ָ��Ϊ��
		this->M_FileIsEmp = true;	//��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}
	char ch;	//2.�ļ���������Ϊ�����
	ifs >> ch;
	if (ifs.eof()) {	//�º������ж��ļ��Ƿ�Ϊ��
		//cout << "�ļ�Ϊ�գ������룺JG001" << endl;
		this->M_EmpNum = 0;	//��ʼ����¼����Ϊ0
		this->M_EmpNum = NULL;	//��ʼ������ָ��Ϊ��
		this->M_FileIsEmp = true;	//��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();
		return;
	}
	int num = this->get_EmpNum();	//3.�ļ����ڣ����Ҽ�¼�������
	//cout << "ְ������Ϊ:" << num << endl;
	this->M_EmpNum = num;
	this->M_EmpArray = new Worker * [this->M_EmpNum];	//���ٿռ�
	this->init_Emp();	//���ļ����ݴ浽������
}

void WorkerManager::show_Menu() {
	cout << "*******************************" << endl;
	cout << "**** ��ӭʹ��ְ������ϵͳ��****" << endl;
	cout << "******* 0. �˳�������� *******" << endl;
	cout << "******* 1. ����ְ����Ϣ *******" << endl;
	cout << "******* 2. ��ʾְ����Ϣ *******" << endl;
	cout << "******* 3. ɾ����ְְ�� *******" << endl;
	cout << "******* 4. �޸�ְ����Ϣ *******" << endl;
	cout << "******* 5. ����ְ����Ϣ *******" << endl;
	cout << "******* 6. ���ձ������ *******" << endl;
	cout << "******* 7. ��������ĵ� *******" << endl;
	cout << endl;
}

void WorkerManager::exitSystem() {
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);	//�˳�����
}

void WorkerManager::Add_Emp() {
	cout << "���������ְ��������";
	int addNum = 0;	//�����û�����������
	cin >> addNum;
	if (addNum > 0) {
		int newSize = this->M_EmpNum + addNum;	//��������¿ռ��С���¿ռ��С = ԭ����¼������ + ��������
		Worker** newSpace =  new Worker* [newSize];	//�����¿ռ�
		if (this->M_EmpArray != NULL) {	//��ԭ���ռ������ݣ��������¿ռ���
			for (int i = 0; i < this->M_EmpNum; i++) {
				newSpace[i] = this->M_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++) {	//�������������
			int id;
			string name;
			int dSelect;
			cout << "�������" << i + 1 << "λ��ְ����ţ�";
			cin >> id;
			cout << "�������" << i + 1 << "λ��ְ��������";
			cin >> name;
			cout << "ѡ���ְ����λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.��Ŀ����" << endl;
			cout << "3.��˾�ϰ�" << endl;
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
			newSpace[this->M_EmpNum + i] = worker;	//������ְ����Ϣ�����浽��ֵ
		}
		delete[]this->M_EmpArray;	//�ͷ�ԭ�пռ�
		this->M_EmpArray = newSpace;	//�����¿ռ��ָ��
		this->M_EmpNum = newSize;	//�����µ�ְ������
		this->M_FileIsEmp = false;	//����ְ����Ϊ�ձ�־
		this->save();	//���ݳ־û�������ְ����Ϣ
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
	}else {
		cout << "�﷨����" << endl;
		return;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);	//д���ļ�
	for (int i = 0; i < this->M_EmpNum; i++) {	//��ÿ��������д�뵽�ļ���
		ofs << this->M_EmpArray[i]->M_ID << " "
			<< this->M_EmpArray[i]->M_Name << " "
			<< this->M_EmpArray[i]->M_DeptId << endl;
	}
	ofs.close();
}

int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	//���ļ�	��ȡ
	int id;
	string name;
	int dId;
	int num = 0;	//ͳ����������־
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
		if (dId == 1) {	//��ְͨ��
			worker = new Employee(id,name,dId);
		}else if (dId == 2) {	//����
			worker = new Manager(id, name,dId);
		}else {	//��˾�ϰ�
			worker = new Boss(id, name, dId);
		}
		this->M_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp() {
	if (this->M_FileIsEmp) {
		cout << "�ļ������ڻ��߼�¼Ϊ�ա������룺WJG001" << endl;
	}else {
		for (int i = 0; i < M_EmpNum; i++) {
			this->M_EmpArray[i]->showInfo();	//���ö�̬���ó���ӿ�
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp() {
	if (this->M_FileIsEmp) {
		cout << "�ļ������ڻ��¼Ϊ�գ������룺WJG001" << endl;
	}else {
		cout << "������ɾ��ְ�����:";
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) {	//ְ�����ڣ���ɾ��
			for (int i = index; i < this->M_EmpNum -1; i++) {	//����ǰ��
				this->M_EmpArray[i] = this->M_EmpArray[i + 1];
			}
			this->M_EmpNum--;	//���������м�¼����Ա����
			this->save();
			cout << "ɾ���ɹ���" << endl;
		}else {
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ���������룺JG002" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ������룺WJG001" << endl;
	}else {
		cout << "�������޸�ְ�����:";
		int id = 0;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1) {
			delete this->M_EmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelelct = 0;
			cout << "�鵽:" << id << "��ְ������������ְ������:";
			cin >> newId;
			cout << "������������:";
			cin >> newName;
			cout << "�������¸�λ:";
			cout << "1.��ְͨ��" << endl;
			cout << "2.��Ŀ����" << endl;
			cout << "3.��˾�ϰ�" << endl;
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
			cout << "�޸ĳɹ���" << endl;
		}else {
			cout << "�޸�ʧ�ܣ�δ�ҵ���ְ���������룺JG002" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp() {
	if (this->M_FileIsEmp) {
		cout << "�ļ������ڻ��¼Ϊ�գ������룺WJG001" << endl;
	}else {
		cout << "��������ҷ�ʽ:" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.��ְ����������" << endl;
		int select;
		cin >> select;
		if (select == 1) {
			int id;
			cout << "���������ְ�����:";
			cin >> id;
			int ret = this->IsExist(id);
			if (ret != -1) {
				cout << "���ҳɹ�!��ְ����Ϣ����:" << endl;
				this->M_EmpArray[ret]->showInfo();
			}else {
				cout << "����ʧ�ܣ�δ�ҵ���ְ���������룺JG002" << endl;
			}
		}else if (select == 2) {
			string name;
			cout << "���������ְ������:";
			cin >> name;
			bool flag = false;
			for (int i = 0;i < M_EmpNum;i++) {
				if (this->M_EmpArray[i]->M_Name == name) {
					cout << "���ҳɹ�!ְ�����Ϊ"
						<< this->M_EmpArray[i]->M_ID
						<< "��ְ����Ϣ����:" << endl;
					this->M_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false) {
				cout << "����ʧ�ܣ�δ�ҵ���ְ���������룺JG002" << endl;
			}
		}
		else {
			cout << "�﷨����" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp() {
	if (this->M_FileIsEmp) {
		cout << "�ļ������ڻ��¼Ϊ�գ������룺WJG001" << endl;
		system("pause");
		system("cls");
	}else {
		cout << "��ѡ������ʽ:" << endl;
		cout << "1.����ְ�������������" << endl;
		cout << "2.����ְ����Ž�������" << endl;
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
		cout << "����ɹ�!�����Ľ��Ϊ:" << endl;
		this->Show_Emp();
	}
}

void WorkerManager::Clen_File() {
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs(FILENAME, ios::trunc);	//ɾ���ļ����ؽ�
		ofs.close();
		if (this->M_EmpArray != NULL) {
			for (int i = 0;i < this->M_EmpNum;i++) {
				delete this->M_EmpArray[i];
				this->M_EmpArray[i] = NULL;
			}
			delete[]this->M_EmpArray;	//ɾ����������ָ��
			this->M_EmpArray = NULL;
			this->M_EmpNum = 0;
			this->M_FileIsEmp = true;
		}
		cout << "��ճɹ�!" << endl;
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