#include<iostream>
using namespace std;

class Animal {	//������
public:
	virtual void speak() {		//�麯���������ַ�������
		cout << "������˵����" << endl;
	}
};
class Cat :public Animal {	//è��
	void speak() {
		cout << "�� �� ����" << endl;
	}
};
class Dog :public Animal {	//����
	void speak() {
		cout << "�� �� ����" << endl;
	}
};

void doSpeak(Animal &animal) {	//ִ�к�����Animal &animal = Tom;��ַ��󶨣����������˵��
	animal.speak();
}
void test50() {	//ʵ����
	Cat Tom;
	doSpeak(Tom);
	Dog WangC;
	doSpeak(WangC);
}

int main57() {
	test50();
	system("pause");
	return 0;
}