#include<iostream>
using namespace std;

template<typename T>
class Base {
	T m;
};
//class Son :public Base {	//错误，必须知道父类中T的数据类型，才能继承给子类 };
class Son :public Base<int> {  };
void test11() {
	Son s1;
}
// 灵活指定出父类T的类型，子类也需变为类模板
template<typename T1,typename T2>
class Son11 :public Base<T1> {
public:
	Son11() {
		cout << "T1的数据类型为 :" << typeid(T1).name() << endl;
		cout << "T2的数据类型为 :" << typeid(T2).name() << endl;
	}
	T2 obj;
};
void test11a1() {
	Son11<int, char>s2;

}

int main11() {
	test11a1();
	system("pause");
	return 0;
}