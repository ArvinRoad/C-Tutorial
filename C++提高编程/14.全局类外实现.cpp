#include<iostream>
using namespace std;

template<typename NameType, typename AgeType>
class Person14a1;	//��ǰ�ñ�����֪��Person14a1�Ĵ���
//ȫ�ֺ���������ʵ��,ʵ���ñ�������ǰ����
template<typename NameType, typename AgeType>
void PrintPerson14(Person14a1<NameType, AgeType>p) {
	cout << "Name: " << p.M_Name << endl;cout << "Age: " << p.M_Age << endl;
}

template<typename NameType,typename AgeType>
class Person14a1 {
	friend void PrintPerson14<>(Person14a1<NameType,AgeType>p);	//�ӿ�ģ������б����ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪�������������
public:
	Person14a1(NameType name,AgeType age){
		this->M_Name = name;
		this->M_Age = age;
	}
private:
	NameType M_Name;
	AgeType M_Age;
};
void test14a1() {
	Person14a1<string, int>p("Tom", 22);
	PrintPerson14(p);
}
int main14a1() {
	test14a1();
	system("pause");
	return 0;
}