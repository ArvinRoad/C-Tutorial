#include<iostream>
using namespace std;

class Animal2 {
public:
	virtual void Speak02() { cout << "�����ڽУ�" << endl; }
};
class Cat2 :public Animal2 {
public:
	void Speak02() { cout << "�� �� ����" << endl; }
};
class Dog2 :public Animal2 {
public:
	void Speak02() { cout << "�� �� ����" << endl; }
};

void doSpeak02(Animal2& animal){
	animal.Speak02();
}
void test51() {
	Cat2 Tom;
	doSpeak02(Tom);
	Dog2 WangC;
	doSpeak02(WangC);
}
void test52() {
	cout << "sizeof Animal2 = " << sizeof(Animal2) << endl;//����virtual��1�ֽڣ�������(32bit��4�ֽ�|64bit��8�ֽ�)
}

int main58() {
	test51();
	test52();
	system("pause");
	return 0;
}