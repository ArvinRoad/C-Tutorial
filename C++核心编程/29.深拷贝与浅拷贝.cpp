#include<iostream>
using namespace std;

class Person07{
public:
	Person07() { cout << "Person的默认构造函数调用！" << endl; }
	Person07(int age,int heigth) { 
		m_Age = age;
		m_Height = new int(heigth);	//新建一个空间(堆区),m_Height接收新建的空间,需要手动释放
		cout << "Person的有参构造函数调用！" << endl; 
	}
	~Person07(){ //析构代码，将构造函数中开辟的堆空间释放
		if (m_Height != NULL) {	//判断：如果m_Height的空间没有释放，那么我们进行释放操作
			delete m_Height;	//释放空间
			m_Height = NULL;	//防止野指针的出现，我们再次进行置空操作，这里会除非断点出现异常
		}
		cout << "Person的析构函数调用！" << endl; 
	}
	Person07(const Person07& P) {	//手动实现拷贝构造函数，解决浅拷贝带来的问题
		cout << "Person的拷贝构造函数的调用！" << endl;
		m_Age = P.m_Age;
		//m_Height = P.m_Height;	//编译器默认生成就是这行代码
		m_Height = new int(*P.m_Height);	//深拷贝操作
	}

	int m_Age; 
	int* m_Height;	//声明一个指针变量
};

void test12(){
	Person07 P1(18,160);
	cout << "P1的AGE为：" << P1.m_Age << endl;
	cout << "P1的Height为：" << *P1.m_Height << endl;	//解开引用输出
	Person07 P2(P1);	//浅拷贝操作
	cout << "P2的AGE为：" << P2.m_Age << endl;
	cout << "P2的Height为：" << *P2.m_Height << endl;	//解开引用输出
	
}

int main29() {
	test12();
	system("pause");
	return 0;
}