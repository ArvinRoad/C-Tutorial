#include<iostream>
using namespace std;
#include<string>

class AbstractCalculator {	//������������
public:
	virtual int gteResult() {
		return 0;
	}
	int M_Num1, M_Num2;
};
class AddCalculator :public AbstractCalculator {	//�ӷ���
public:
	virtual int gteResult() {
		return M_Num1+M_Num2;
	}
};
class SubCalculator :public AbstractCalculator {	//������
public:
	virtual int gteResult() {
		return M_Num1-M_Num2;
	}
};
class MulCalculator :public AbstractCalculator {	//�˷���
	virtual int gteResult() {
		return M_Num1 * M_Num2;
	}
};
class CufCalculator :public AbstractCalculator {	//����
	virtual int gteResult() {
		return M_Num1 / M_Num2;
	}
};

void test54() {
	AbstractCalculator* abc = new AddCalculator;	//����ָ�������ָ���������
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