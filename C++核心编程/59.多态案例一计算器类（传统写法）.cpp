#include<iostream>
using namespace std;
#include<string>

class Calculator {	//∆’Õ®–¥∑®
public:
	int getResult(string oper) {
		if (oper == "+"){
			return M_Num1 + M_Num2;
		}else if (oper == "-") {
			return M_Num1 - M_Num2;
		}else if (oper == "*") {
			return M_Num1 * M_Num2;
		}else if (oper == "/") {
			return M_Num1 / M_Num2;
		}
	}
	int M_Num1, M_Num2;
};
void test53() {
	Calculator c;
	c.M_Num1 = 10;
	c.M_Num2 = 10;
	cout << c.M_Num1 << "+" << c.M_Num2 << "=" << c.getResult("+") << endl;
	cout << c.M_Num1 << "-" << c.M_Num2 << "=" << c.getResult("-") << endl;
	cout << c.M_Num1 << "*" << c.M_Num2 << "=" << c.getResult("*") << endl;
	cout << c.M_Num1 << "/" << c.M_Num2 << "=" << c.getResult("/") << endl;
}

int main59() {
	test53();
	system("pause");
	return 0;
}