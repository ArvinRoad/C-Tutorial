#include<iostream>
using namespace std;

class AbstractDrinking {	//��Ʒ������
public:
	virtual void Boil() = 0;	//��ˮ
	virtual void Brew() = 0;	//����
	virtual void PourInCup() = 0;	//���뱭��
	virtual void PutSomething() = 0;	//���븨��
	void makeDrink() {	//������Ʒ����
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee :public AbstractDrinking{	//������
public:
	virtual void Boil() { cout << "��ˮ" << endl; }	//��ˮ
	virtual void Brew() { cout << "���ݿ���" << endl; }	//����
	virtual void PourInCup() { cout << "���뱭��" << endl; }	//���뱭��
	virtual void PutSomething() { cout << "�����Ǻ�ţ��" << endl; }	//���븨��
};
class Tea :public AbstractDrinking {	//����
public:
	virtual void Boil() { cout << "��ˮ" << endl; }	//��ˮ
	virtual void Brew() { cout << "���ݲ�Ҷ" << endl; }	//����
	virtual void PourInCup() { cout << "���뱭��" << endl; }	//���뱭��
	virtual void PutSomething() { cout << "�������ʺ����" << endl; }	//���븨��
};

void doWork03(AbstractDrinking *abs) {	//��������,AbstractDrinking *abs = new Coffee
	abs->makeDrink();
	delete abs;
}
void test56() {
	doWork03(new Coffee);
	cout << "��������������������" << endl;
	doWork03(new Tea);
}

int main62() {
	test56();
	system("pause");
	return 0;
}