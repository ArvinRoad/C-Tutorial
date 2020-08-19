#include<iostream>
using namespace std;

class Java {	//Java页面类，普通实现页面
public:
	void header() { cout << "首页、公开课、登录、注册……(公共头部)" << endl; }
	void footer() { cout << "帮助中心、交流合作、站内地图……(公共底部)" << endl; }
	void left() { cout << "Java、Python、C/C++……(公共分类列表)" << endl; }
	void content() { cout << "Java学科视频" << endl; }
};
class Python {	//Java页面类，普通实现页面
public:
	void header() { cout << "首页、公开课、登录、注册……(公共头部)" << endl; }
	void footer() { cout << "帮助中心、交流合作、站内地图……(公共底部)" << endl; }
	void left() { cout << "Java、Python、C/C++……(公共分类列表)" << endl; }
	void content() { cout << "Python学科视频" << endl; }
};
class CPP {	//Java页面类，普通实现页面
public:
	void header() { cout << "首页、公开课、登录、注册……(公共头部)" << endl; }
	void footer() { cout << "帮助中心、交流合作、站内地图……(公共底部)" << endl; }
	void left() { cout << "Java、Python、C/C++……(公共分类列表)" << endl; }
	void content() { cout << "C/C++学科视频" << endl; }
};

void test37() {
	Java ja;
	cout << "Java下载视频页面如下：" << endl;
	ja.header();ja.footer();ja.left();ja.content();
	cout << "——————————" << endl;
	Python py;
	cout << "Python下载视频页面如下：" << endl;
	py.header(); py.footer(); py.left(); py.content();
	cout << "——————————" << endl;
	CPP cp;
	cout << "Python下载视频页面如下：" << endl;
	cp.header(); cp.footer(); cp.left(); cp.content();
}

int main48() {
	test37();
	system("pause");
	return 0;
}