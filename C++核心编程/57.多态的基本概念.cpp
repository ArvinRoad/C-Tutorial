#include<iostream>
using namespace std;

class Animal {	//动物类
public:
	virtual void speak() {		//虚函数，解决地址早绑定问题
		cout << "动物在说话！" << endl;
	}
};
class Cat :public Animal {	//猫类
	void speak() {
		cout << "喵 喵 喵！" << endl;
	}
};
class Dog :public Animal {	//狗类
	void speak() {
		cout << "汪 汪 汪！" << endl;
	}
};

void doSpeak(Animal &animal) {	//执行函数，Animal &animal = Tom;地址早绑定：输出动物在说话
	animal.speak();
}
void test50() {	//实现体
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