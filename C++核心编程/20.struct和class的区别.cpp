#include<iostream>
using namespace std;

class C1 {	//class:Ĭ��Ȩ��Ϊ˽��Ȩ��
	int m_A;
};

struct C2 {	//struct:Ĭ��Ȩ��Ϊ����Ȩ��
	int m_A;
};

int main20() {
	C1 c1;
	C2 c2;
	//c1.m_A = 100;	//��������Ȩ��Ϊ˽��
	c2.m_A = 100;		//Ĭ��Ȩ��Ϊ����
	system("pause");
	return 0;
}