#include<iostream>
using namespace std;
#include<string>
#define MAX 100	//�����

struct Person{	//��ϵ�˽ṹ��
	string m_Name; int m_Sex; int m_Age; string m_Phone; string m_Addr;
};
struct AddressBooks {	//ͨѶ¼�ṹ��
	Person personArray[MAX];	//ͨѶ¼������ϵ������
	int m_Size;	//ͨѶ¼�б������Ա����
};
void addPerson(AddressBooks *abs) {
	if (abs->m_Size == MAX) {	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}else {	//�����ϵ��
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << "\t2 --- Ů" << endl;
		int sex = 0;
		while (true) {	//���������ȷ�˳�ѭ���壬���������������
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}else {
				cout << "�﷨�������������룺" << endl;
			}
		}
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		cout << "������绰���룺" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		cout << "�������ͥ��ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;
		system("pause");	//�밴���������
		system("cls");	//cls:����
	}
}
void ShowPerson(AddressBooks* abs) {	//��ʾ������ϵ��
	if (abs->m_Size == 0) {
		cout << "��ǰ��ϵ���б�Ϊ�գ��������ϵ�ˣ�" << endl;
	}else{
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ͥסַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(AddressBooks* abs, string name) {	//������ϵ�ˣ�����1��ͨѶ¼���飬����2���Աȵ�����
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {	//�ҵ��û������������
			return i;	//�ҵ��ˣ�����������������е��±���
		}
	}
	return -1;	//�����������û���ҵ�������-1
}
void deletePers(AddressBooks *abs) {	//ɾ����ϵ��
	cout << "��������Ҫɾ������ϵ�ˣ�" <<" ";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++){
			abs->personArray[i] = abs->personArray[i + 1];	//����ǰ��
		}
		abs->m_Size--;	//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ���" << endl;
	}else {
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(AddressBooks *abs) {
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << "";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ͥסַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(AddressBooks* abs) {	//�޸���ϵ��
	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << " ";
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {	//�ҵ�ָ������ϵ��
		string name;
		int sex = 0;
		int age = 0;
		string phone;
		string address;
		cout << "���޸�������" << " ";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "���޸��Ա�(1 --- ��|2 --- Ů)��" << " ";
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) { //������ȷ�˳�ѭ��
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�﷨�������������룺" << " ";
		}
		cout << "���޸����䣺" << " ";
		cin >> age;
		abs->personArray[ret].m_Age = age;
		cout << "���޸ĵ绰��" << " ";
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "���޸ļ�ͥ��ַ" << " ";
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ��ˣ�" << endl;
	}else {
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(AddressBooks* abs) {	//���ͨѶ¼
	char cleanperson;
	cout << "ȷ���Ƿ������ϵ���б�(Y/N)��" << " ";
	cin >> cleanperson;
	if (cleanperson == 'Y') {
		abs->m_Size = 0;	//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
		cout << "ͨѶ¼�����" << endl;
	}
	system("pause");
	system("cls");
}
void ShowMenu(){
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
	cout << " " << endl;
}
int main() {
	AddressBooks abs;
	abs.m_Size = 0;
	int select = 0;	//�����û�ѡ�����
	char exitsystem;
	while (true){
		ShowMenu();
		cout << "������ѡ�����У�" << " ";
		cin >> select;
		switch (select) {
		case 1:
			addPerson(&abs);	//���õ�ַ���ݣ���������ʵ��
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
			cout << "ȷ���Ƿ��˳�(Y/N)��" << " ";
			cin >> exitsystem;
			if (exitsystem == 'N') {
				system("cls");
				break;
			}
			else if (exitsystem == 'Y') {
				cout << "��ӭ�´�ʹ��!" << endl;
				system("pause");
				return 0;
			}
		default:
			cout << "�����﷨�������������룺" << endl;
			break;
		}
	}
	system("pause");	//pause���밴���������
	return 0;
}