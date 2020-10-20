#include"MyArray.hpp"
#include<string>

void printIntArray(MyArray<int>&arr) {
	for (int i = 0;i < arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}
void testShuzL() {
	MyArray<int> arr1(5);
	MyArray<int>arr3(100);	//�������
	for (int i = 0;i < 5;i++) {	//����β��
		arr1.Push_Back(i);	//����β�巨�������в�������
	}
	cout << "Arr1�Ĵ�ӡ���Ϊ: " << endl;
	arr3 = arr1;
	printIntArray(arr1);
	cout << "Arr1������Ϊ: " << arr1.getCapacity() << endl;	//����Arr1������
	cout << "Arr1�Ĵ�СΪ: " << arr1.getSize() << endl;	//����Arr1�Ĵ�С
	MyArray<int>arr2(arr1);	//���Կ������캯��
	cout << "Arr2�Ĵ�ӡ���Ϊ: " << endl;
	printIntArray(arr2);
	arr2.Pop_Back();	//βɾ
	cout << "Arr2������Ϊ: " << arr2.getCapacity() << endl;	//����Arr1������
	cout << "Arr2��СΪ: " << arr2.getSize() << endl;	//����Arr1�Ĵ�С
}
class PersonS {	//�Զ����������Ͳ���
public:
	PersonS() { }
	PersonS(string name,int age){
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void printPerosnArray(MyArray <PersonS>&arr) {
	for (int i = 0;i < arr.getSize();i++) {
		cout << "����: " << arr[i].m_Name << "����" << arr[i].m_Age << endl;
	}
}
void testPersonS() {
	MyArray<PersonS>arr(10);
	PersonS p1("����", 15);PersonS p2("����", 18);PersonS p3("����", 22);PersonS p4("����", 19);
	arr.Push_Back(p1);arr.Push_Back(p2);arr.Push_Back(p3);arr.Push_Back(p4);	//�����ݲ��뵽������
	printPerosnArray(arr);	//��ӡ����
	cout << "Arr������Ϊ: " << arr.getCapacity() << endl;	//�������
	cout << "Arr�Ĵ�СΪ: " << arr.getSize() << endl;	//�����С
}

int main15() {
	testShuzL();
	testPersonS();
	system("pause");
	return 0;
}