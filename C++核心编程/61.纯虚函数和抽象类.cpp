#include<iostream>
using namespace std;

class Base08 {
public:
	virtual void func11() = 0;	//���麯����������Ϊ�����ࡣ�ص㣺�޷�ʵ�����������������д���ി�麯����
};
class Son08 :public Base08 {
public:
	virtual void func11() { cout << "Func�������ã�" << endl; }
};
class Son09 :public Base08 {
	virtual void func11() { cout << "Func2�������ã�" << endl; }
};

void test55() {
	//Base08 b;	new Base08;	//�����޷�ʵ����(������)����ջ�����Ƕ�����
	//Son08 s;	//�������������д���ി�麯���������޷�ʵ��������
	Base08* base = new Son08;
	base->func11();
	delete base;
	base = new Son09;
	base->func11();
	delete base;
}

int main61() {
	test55();
	system("pause");
	return 0;
}