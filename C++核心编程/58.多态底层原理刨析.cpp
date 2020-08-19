#include<iostream>
using namespace std;

class Animal2 {
public:
	virtual void Speak02() { cout << "动物在叫！" << endl; }
};
class Cat2 :public Animal2 {
public:
	void Speak02() { cout << "喵 喵 喵！" << endl; }
};
class Dog2 :public Animal2 {
public:
	void Speak02() { cout << "汪 汪 汪！" << endl; }
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
	cout << "sizeof Animal2 = " << sizeof(Animal2) << endl;//不加virtual是1字节，加上是(32bit是4字节|64bit是8字节)
}

int main58() {
	test51();
	test52();
	system("pause");
	return 0;
}