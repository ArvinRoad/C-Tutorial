#include<iostream>
using namespace std;

template<typename T>
class Base {
	T m;
};
//class Son :public Base {	//���󣬱���֪��������T���������ͣ����ܼ̳и����� };
class Son :public Base<int> {  };
void test11() {
	Son s1;
}
// ���ָ��������T�����ͣ�����Ҳ���Ϊ��ģ��
template<typename T1,typename T2>
class Son11 :public Base<T1> {
public:
	Son11() {
		cout << "T1����������Ϊ :" << typeid(T1).name() << endl;
		cout << "T2����������Ϊ :" << typeid(T2).name() << endl;
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