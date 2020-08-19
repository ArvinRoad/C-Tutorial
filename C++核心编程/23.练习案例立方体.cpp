#include<iostream>
using namespace std;

class Cube {	//立方体类
public:	//调用接口
	void setL(int L) {m_L = L;}	//设置长
	int getL() { return m_L; }	//获取长
	void setW(int W) { m_W = W; }
	int getW() { return m_W; }
	void setH(int H) { m_H = H; }
	int getH() { return m_H; }
	int calculateS() {	//获取立方体面积
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	int calculateV() {	//获取立方体体积
		return m_L * m_W * m_H;
	}
	/*利用成员函数判断两个立方体是否相等*/
	bool isSameByClass(Cube &c) {	//c是新引入的
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		return false;
	}
private:	//创建属性长宽高
	int m_L,m_W, m_H;
};
/*利用全局函数来判断两个立方体是否相等*/
bool isSame(Cube &c1, Cube &c2) {	//引用传递值
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}
int main23() {
	Cube c1; c1.setL(10); c1.setW(10); c1.setH(10);
	cout << "C1的面积为：" << c1.calculateS() << endl; cout << "C1的体积为：" << c1.calculateV() << endl;
	Cube c2; c2.setL(10); c2.setW(10); c2.setH(10);
	isSame(c1, c2);
	bool ret = isSame;	//全局函数判断
	if (ret) {
		cout << "全局函数c1和c2是相等的" << endl;
	}else {
		cout << "全局函数c1和c2是不相等的" << endl;
	}
	ret = c1.isSameByClass(c2);	//成员函数判断
	if (ret) {
		cout << "成员函数c1和c2是相等的" << endl;
	}
	else {
		cout << "成员函数c1和c2是不相等的" << endl;
	}
	system("pause");
	return 0;
}