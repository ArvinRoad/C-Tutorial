#include<iostream>
using namespace std;

class BasePage {	//����ҳ����
public:
	void header() { cout << "��ҳ�������Ρ���¼��ע�ᡭ��(����ͷ��)" << endl; }
	void footer() { cout << "�������ġ�����������վ�ڵ�ͼ����(�����ײ�)" << endl; }
	void left() { cout << "Java��Python��C/C++����(���������б�)" << endl; }
};
class Java02 :public BasePage {	//�̳�BasePage
public:
	void content() { cout << "Javaѧ����Ƶ" << endl; }
};
class Python02:public BasePage {	//�̳�BasePage
public:
	void content() { cout << "Pythonѧ����Ƶ" << endl; }
};
class CPP02 :public BasePage {	//�̳�BasePage
public:
	void content() { cout << "C/C++ѧ����Ƶ" << endl; }
};

void test38() {
	Java02 ja;
	cout << "Java������Ƶҳ�����£�" << endl;
	ja.header(); ja.footer(); ja.left(); ja.content();
	cout << "��������������������" << endl;
	Python02 py;
	cout << "Python������Ƶҳ�����£�" << endl;
	py.header(); py.footer(); py.left(); py.content();
	cout << "��������������������" << endl;
	CPP02 cp;
	cout << "Python������Ƶҳ�����£�" << endl;
	cp.header(); cp.footer(); cp.left(); cp.content();
}

int main49() {
	test38();
	system("pause");
	return 0;
}