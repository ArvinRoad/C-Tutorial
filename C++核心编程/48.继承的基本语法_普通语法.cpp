#include<iostream>
using namespace std;

class Java {	//Javaҳ���࣬��ͨʵ��ҳ��
public:
	void header() { cout << "��ҳ�������Ρ���¼��ע�ᡭ��(����ͷ��)" << endl; }
	void footer() { cout << "�������ġ�����������վ�ڵ�ͼ����(�����ײ�)" << endl; }
	void left() { cout << "Java��Python��C/C++����(���������б�)" << endl; }
	void content() { cout << "Javaѧ����Ƶ" << endl; }
};
class Python {	//Javaҳ���࣬��ͨʵ��ҳ��
public:
	void header() { cout << "��ҳ�������Ρ���¼��ע�ᡭ��(����ͷ��)" << endl; }
	void footer() { cout << "�������ġ�����������վ�ڵ�ͼ����(�����ײ�)" << endl; }
	void left() { cout << "Java��Python��C/C++����(���������б�)" << endl; }
	void content() { cout << "Pythonѧ����Ƶ" << endl; }
};
class CPP {	//Javaҳ���࣬��ͨʵ��ҳ��
public:
	void header() { cout << "��ҳ�������Ρ���¼��ע�ᡭ��(����ͷ��)" << endl; }
	void footer() { cout << "�������ġ�����������վ�ڵ�ͼ����(�����ײ�)" << endl; }
	void left() { cout << "Java��Python��C/C++����(���������б�)" << endl; }
	void content() { cout << "C/C++ѧ����Ƶ" << endl; }
};

void test37() {
	Java ja;
	cout << "Java������Ƶҳ�����£�" << endl;
	ja.header();ja.footer();ja.left();ja.content();
	cout << "��������������������" << endl;
	Python py;
	cout << "Python������Ƶҳ�����£�" << endl;
	py.header(); py.footer(); py.left(); py.content();
	cout << "��������������������" << endl;
	CPP cp;
	cout << "Python������Ƶҳ�����£�" << endl;
	cp.header(); cp.footer(); cp.left(); cp.content();
}

int main48() {
	test37();
	system("pause");
	return 0;
}