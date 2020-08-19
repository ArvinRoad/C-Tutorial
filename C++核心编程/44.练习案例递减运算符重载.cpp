#include<iostream>
using namespace std;

class MyIntegerJ {
	friend ostream& operator<<(ostream &cout, MyIntegerJ MyIntJ);
public:
	MyIntegerJ() { m_Num = 1; }
	MyIntegerJ& operator--() {
		m_Num--;
		return *this;
	}
	MyIntegerJ operator--(int) {
		MyIntegerJ temp = *this;
		m_Num--;
		return temp;
	}
private:
	int m_Num;
};
ostream& operator<<(ostream &cout,MyIntegerJ MyIntJ) {
	cout << MyIntJ.m_Num;
	return cout;
}

void test31() {
	MyIntegerJ MyIntJ;
	cout << --MyIntJ << endl;
	cout << MyIntJ << endl;
}
void test32() {
	MyIntegerJ MyIntJ;
	cout << MyIntJ-- << endl;
	cout << MyIntJ << endl;
}

int main44() {
	test31();
	test32();
	system("pause");
	return 0;
}