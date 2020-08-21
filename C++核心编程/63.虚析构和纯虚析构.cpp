#include<iostream>
using namespace std;
#include<string>

class Animal3 {
public:
	Animal3() {
		cout << "Animal构造调用！" << endl;
	}
	virtual void speak() = 0;
	virtual ~Animal3() = 0;	//纯虚析构，需要有声明，也需要有实现。有了纯虚析构这个类属于抽象了，无法实例化对象
	/*virtual ~Animal3(){	//解决内存泄漏，利用虚析构可以解决父类指针释放子类对象时不干净的问题
		cout << "Animal析构调用！" << endl;
	}*/
};
Animal3::~Animal3() {
	cout << "Animal纯虚析构调用！" << endl;
}
class Cat3 :public Animal3 {
public:
	Cat3(string name) {
		cout << "Cat构造调用！" << endl;
		M_Name = new string(name);
	}
	virtual void speak() {
		cout <<*M_Name<< "小猫在说话！" << endl;
	}
	~Cat3(){
		if (M_Name != NULL) {
			cout << "Cat析构调用！" << endl;
			delete M_Name;	//父类指针在析构时候不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
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