#include<iostream>
using namespace std;
#include<string>

class MyPrint {	//��ӡ�����
public:
	void operator()(string test) {	//���غ������������,����һ������
		cout << test << endl;
	}
};
class MyAdd {	//�ӷ��࣬�º����ǳ���û�й̶�д�����º������������ǵ���������д��Ҫ�ķº���
public:
	int operator()(int num,int num2) {	//������������
		return num + num2;
	}
};

void MyPerint02(string test) {	//����
	cout << test << endl;
}
void test35(){
	MyPrint myPerint;
	myPerint("Hello C++ World!");	//��������������ʵ�Ƿº���
	MyPerint02("Hello Java World");	//��������
}
void test36() {
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "MyAdd����ֵΪ��" << ret << endl;
	cout << MyAdd()(100, 100) << endl;	//�������������Զ��ͷ�MyAdd()���������������˷º�������Ϊ������������
}

int main47() {
	test35();
	test36();
	system("pause");
	return 0;
}