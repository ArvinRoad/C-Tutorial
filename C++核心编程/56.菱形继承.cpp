#include<iostream>
using namespace std;
class Animal {	//动物类，虚基类
public:
	int M_Age;
};
class Sheep :virtual public Animal {	//羊类，虚继承

};
class Tuo :virtual public Animal {	//驼类

};
class SheepTuo :public Sheep, public Tuo {

};

void test49() {
	SheepTuo st;
	st.Sheep::M_Age = 18;	//发生虚继承看成一份数据
	st.Tuo::M_Age = 28;
	cout << "st.Sheep::M_Age = " << st.Sheep::M_Age << endl;
	cout << "st.Tuo::M_Age = " << st.Tuo::M_Age << endl;
	cout << "st.M_Age = " << st.M_Age << endl;
}

int main56() {
	test49();
	system("pause");
	return 0;
}