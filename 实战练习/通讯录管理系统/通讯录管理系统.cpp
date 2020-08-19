#include<iostream>
using namespace std;
#include<string>
#define MAX 100	//定义宏

struct Person{	//联系人结构体
	string m_Name; int m_Sex; int m_Age; string m_Phone; string m_Addr;
};
struct AddressBooks {	//通讯录结构体
	Person personArray[MAX];	//通讯录保存联系人数组
	int m_Size;	//通讯录中保存的人员个数
};
void addPerson(AddressBooks *abs) {
	if (abs->m_Size == MAX) {	//判断通讯录是否以满，如果满了就不再添加
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}else {	//添加联系人
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << "\t2 --- 女" << endl;
		int sex = 0;
		while (true) {	//如果输入正确退出循环体，输入错误重新输入
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}else {
				cout << "语法错误，请重新输入：" << endl;
			}
		}
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "请输入电话号码：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "请输入家庭地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "添加成功！" << endl;
		system("pause");	//请按任意键继续
		system("cls");	//cls:清屏
	}
}
void ShowPerson(AddressBooks* abs) {	//显示所有联系人
	if (abs->m_Size == 0) {
		cout << "当前联系人列表为空，请添加联系人！" << endl;
	}else{
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "家庭住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(AddressBooks* abs, string name) {	//查找联系人，参数1：通讯录数组，参数2：对比的姓名
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {	//找到用户输入的姓名了
			return i;	//找到了，返回这个人在数组中的下标编号
		}
	}
	return -1;	//如果遍历结束没有找到。返回-1
}
void deletePers(AddressBooks *abs) {	//删除联系人
	cout << "请输入您要删除的联系人：" <<" ";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++){
			abs->personArray[i] = abs->personArray[i + 1];	//数据前移
		}
		abs->m_Size--;	//更新通讯录中的人员数
		cout << "删除成功！" << endl;
	}else {
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(AddressBooks *abs) {
	cout << "请输入你要查找的联系人：" << "";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "家庭住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(AddressBooks* abs) {	//修改联系人
	cout << "请输入要修改的联系人：" << " ";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {	//找到指定的联系人
		string name;
		int sex = 0;
		int age = 0;
		string phone;
		string address;
		cout << "请修改姓名：" << " ";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "请修改性别(1 --- 男|2 --- 女)：" << " ";
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) { //输入正确退出循环
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "语法错误，请重新输入：" << " ";
		}
		cout << "请修改年龄：" << " ";
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "请修改电话：" << " ";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "请修改家庭地址" << " ";
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功了！" << endl;
	}else {
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(AddressBooks* abs) {	//清空通讯录
	char cleanperson;
	cout << "确认是否清空联系人列表(Y/N)：" << " ";
	cin >> cleanperson;
	if (cleanperson == 'Y') {
		abs->m_Size = 0;	//将当前记录联系人数量置为0，做逻辑清空操作
		cout << "通讯录已清空" << endl;
	}
	system("pause");
	system("cls");
}
void ShowMenu(){
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
	cout << " " << endl;
}
int main() {
	AddressBooks abs;
	abs.m_Size = 0;
	int select = 0;	//创建用户选择变量
	char exitsystem;
	while (true){
		ShowMenu();
		cout << "请输入选项序列：" << " ";
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs);	//利用地址传递，可以修饰实参
			break;
		case 2:
			ShowPerson(&abs);
			break;
		case 3:
			deletePers(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "确认是否退出(Y/N)：" << " ";
			cin >> exitsystem;
			if (exitsystem == 'N') {
				system("cls");
				break;
			}
			else if (exitsystem == 'Y') {
				cout << "欢迎下次使用!" << endl;
				system("pause");
				return 0;
			}
		default:
			cout << "输入语法错误，请重新输入：" << endl;
			break;
		}
	}
	system("pause");	//pause：请按任意键继续
	return 0;
}