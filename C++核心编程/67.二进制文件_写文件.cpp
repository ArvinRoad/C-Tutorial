#include<iostream>
using namespace std;
#include<fstream>

class Person22 {
public:
	char M_Name[64];	//����ʹ�õ�C���Ե��ַ�������Ϊ�ײ���Cд��
	int M_Age;
};

void test60() {
	ofstream ofs;
	ofs.open("Person.txt", ios::out | ios::binary);	//�����Ʒ�ʽд��
	Person22 p = { "����",18 };
	ofs.write((const char *)&p,sizeof(Person22));
	ofs.close();
}

int main67() {
	test60();
	system("pause");
	return 0;
}