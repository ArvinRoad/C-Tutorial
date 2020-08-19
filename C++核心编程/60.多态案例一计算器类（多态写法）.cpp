#include<iostream>
using namespace std;
#include<string>

class AbstractCalculator {	//计算器抽象类
public:
	virtual int gteResult() {
		return 0;
	}
	int M_Num1, M_Num2;
};
class AddCalculator :public AbstractCalculator {	//加法类
public:
	virtual int gteResult() {
		return M_Num1+M_Num2;
	}
};
class SubCalculator :public AbstractCalculator {	//减法类
public:
	virtual int gteResult() {
		return M_Num1-M_Num2;
	}
};
class MulCalculator :public AbstractCalculator {	//乘法类
	virtual int gteResult() {
		return M_Num1 * M_Num2;
	}
};
class CufCalculator :public AbstractCalculator {	//除法
	virtual int gteResult() {
		return M_Num1 / M_Num2;
	}
};

void test54() {
	AbstractCalculator* abc = new AddCalculator;	//父类指针或引用指向子类对象
	abc->M_Num1 = 100;
	abc->M_Num2 = 100;
	cout << abc->M_Num1 << "+" << abc->M_Num2 << "=" << abc->gteResult() << endl;
	delete abc;
	abc = new SubCalculator;
	abc->M_Num1 = 100;
	abc->M_Num2 = 100;
	cout << abc->M_Num1 << "-" << abc->M_Num2 << "=" << abc->gteResult() << endl;
	delete abc;
	abc = new MulCalculator;
	abc->M_Num1 = 100;
	abc->M_Num2 = 100;
	cout << abc->M_Num1 << "-" << abc->M_Num2 << "=" << abc->gteResult() << endl;
	delete abc;
	abc = new CufCalculator;
	abc->M_Num1 = 100;
	abc->M_Num2 = 100;
	cout << abc->M_Num1 << "-" << abc->M_Num2 << "=" << abc->gteResult() << endl;
	delete abc;
}

int main60() {
	test54();
	system("pause");
	return 0;
}