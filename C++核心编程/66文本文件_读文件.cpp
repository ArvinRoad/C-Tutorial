#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test59() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {	//�ж��ļ��Ƿ�򿪳ɹ�
		cout << "�ļ��򿪴��󣡱����룺5010" << endl;
		return;
	}
	/*��һ�ֶ�ȡ��ʽ*/
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	ifs.close();*/
	/*�ڶ��ֶ�ȡ��ʽ,��������sizeof(buf)Ҳ����д��1024*/
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))){
		cout << buf << endl;
	}*/
	/*�����ֶ�ȡ��ʽ*/
	/*string buf;
	while (getline(ifs,buf)){
		cout << buf << endl;
	}*/
	/*�����ַ�ʽ�����Ƽ�ʹ��(һ���ַ�һ���ַ���ȡ)*/
	char c;
	while ((c=ifs.get())!= EOF) {	//EOF end of File
		cout << c;
	}
}

int main66() {
	test59();
	system("pause");
	return 0;
}