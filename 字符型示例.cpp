#include<iostream>
using namespace std;

int main10() {

	char ch = 'a';
	
	/*
		char ch2 = "b";
		���ch2Ϊ"b",ϵͳ����char�﷨Ϊ''��

		char ch3 ='abc'
		���ch3Ϊ'abc',ϵͳ����charֻ֧���ַ�����֧���ַ�����
	*/

	cout << "ch =" << ch << endl;
	cout << "char ���͵��ڴ�ռ�ռ�ô�СΪ��" << sizeof(ch) << endl;

	cout << (int)ch << endl; //�鿴a��ASCII����


	system("pause");

	return 0;
}