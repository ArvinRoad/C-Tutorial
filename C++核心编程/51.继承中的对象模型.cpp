#include<iostream>
using namespace std;

class Base {	//父类
public:
	int M_A;
protected:
	int M_B;
private:
	int M_C;
};
class Sone :public Base {	//公共继承
	int M_D;
};
class Sone02 :protected Base {	//保护继承

};
class Sone03 :private Base {	//私有继承

};

void test42() {
	//结果为16bit((3*int) = 12+this(int)=16)
	//父类中所有非静态的成员属性都会被子类继承下去
	//父类中私有的成员属性，是被编译器隐藏了，因此是访问不到。但是确实被继承了
	cout << "Size of Sone = " << sizeof(Sone) << endl;
}

int main51() {
	test42();
	system("pause");
	return 0;
}