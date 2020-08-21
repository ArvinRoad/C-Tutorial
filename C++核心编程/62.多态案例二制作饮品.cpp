#include<iostream>
using namespace std;

class AbstractDrinking {	//饮品抽象类
public:
	virtual void Boil() = 0;	//煮水
	virtual void Brew() = 0;	//冲泡
	virtual void PourInCup() = 0;	//倒入杯中
	virtual void PutSomething() = 0;	//加入辅料
	void makeDrink() {	//制作饮品函数
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee :public AbstractDrinking{	//咖啡类
public:
	virtual void Boil() { cout << "煮水" << endl; }	//煮水
	virtual void Brew() { cout << "冲泡咖啡" << endl; }	//冲泡
	virtual void PourInCup() { cout << "倒入杯中" << endl; }	//倒入杯中
	virtual void PutSomething() { cout << "加入糖和牛奶" << endl; }	//加入辅料
};
class Tea :public AbstractDrinking {	//茶类
public:
	virtual void Boil() { cout << "煮水" << endl; }	//煮水
	virtual void Brew() { cout << "冲泡茶叶" << endl; }	//冲泡
	virtual void PourInCup() { cout << "倒入杯中" << endl; }	//倒入杯中
	virtual void PutSomething() { cout << "加入柠檬和枸杞" << endl; }	//加入辅料
};

void doWork03(AbstractDrinking *abs) {	//制作函数,AbstractDrinking *abs = new Coffee
	abs->makeDrink();
	delete abs;
}
void test56() {
	doWork03(new Coffee);
	cout << "——————————" << endl;
	doWork03(new Tea);
}

int main62() {
	test56();
	system("pause");
	return 0;
}