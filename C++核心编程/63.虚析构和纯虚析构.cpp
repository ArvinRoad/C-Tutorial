#include<iostream>
using namespace std;
#include<string>

class Animal3 {
public:
	Animal3() {
		cout << "Animal������ã�" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal3() = 0;	//������������Ҫ��������Ҳ��Ҫ��ʵ�֡����˴���������������ڳ����ˣ��޷�ʵ��������
	/*virtual ~Animal3(){	//����ڴ�й©���������������Խ������ָ���ͷ��������ʱ���ɾ�������
		cout << "Animal�������ã�" << endl;
	}*/
};
Animal3::~Animal3() {
	cout << "Animal�����������ã�" << endl;
}
class Cat3 :public Animal3 {
public:
	Cat3(string name) {
		cout << "Cat������ã�" << endl;
		M_Name = new string(name);
	}
	virtual void speak() {
		cout <<*M_Name<< "Сè��˵����" << endl;
	}
	~Cat3(){
		if (M_Name != NULL) {
			cout << "Cat�������ã�" << endl;
			delete M_Name;	//����ָ��������ʱ�򲻻��������������������������������ж������ԣ������ڴ�й©
			M_Name = NULL;
		}
	}
	string *M_Name;
};

void test57() {
	Animal3* animal = new Cat3("Tom");
	animal->speak();
	delete animal;
}

int main63() {
	test57();
	system("pause");
	return 0;
}