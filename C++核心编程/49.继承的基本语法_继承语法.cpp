#include<iostream>
using namespace std;

class BasePage {	//公共页面类
public:
	void header() { cout << "首页、公开课、登录、注册……(公共头部)" << endl; }
	void footer() { cout << "帮助中心、交流合作、站内地图……(公共底部)" << endl; }
	void left() { cout << "Java、Python、C/C++……(公共分类列表)" << endl; }
};
class Java02 :public BasePage {	//继承BasePage
public:
	void content() { cout << "Java学科视频" << endl; }
};
class Python02:public BasePage {	//继承BasePage
public:
	void content() { cout << "Python学科视频" << endl; }
};
class CPP02 :public BasePage {	//继承BasePage
public:
	void content() { cout << "C/C++学科视频" << endl; }
};

void test38() {
	Java02 ja;
	cout << "Java下载视频页面如下：" << endl;
	ja.header(); ja.footer(); ja.left(); ja.content();
	cout << "——————————" << endl;
	Python02 py;
	cout << "Python下载视频页面如下：" << endl;
	py.header(); py.footer(); py.left(); py.content();
	cout << "——————————" << endl;
	CPP02 cp;
	cout << "Python下载视频页面如下：" << endl;
	cp.header(); cp.footer(); cp.left(); cp.content();
}

int main49() {
	test38();
	system("pause");
	return 0;
}