#include<iostream>
using namespace std;
class Point {	//点类，自定义数据类型
public:
	void setX(int X) { m_X = X; }
	int getX() { return m_X; }
	void setY(int Y) { m_Y = Y; }
	int getY() { return m_Y; }
private:
	int m_X, m_Y;
};
class Circle {	//圆类
public:
	void setR(int R) { m_R = R; }	//设置半径
	int getR() { return m_R; }	//获取半径
	void setCenter(Point Center) { m_Center = Center; }
	Point getCenter() { return m_Center; }
private:
	int m_R;	//半径
	Point m_Center;	//圆心
};
/*判断点和圆的关系*/
void isInCircle(Circle &c,Point &p) {
	//计算两点之间的距离 平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance) {
		cout << "点在圆上" << endl;
	}else if (distance > rDistance) {
		cout << "点在圆外" << endl;
	}else {
		cout << "点在圆内" << endl;
	}
}
int main24() {
	Circle c;	//创建一个圆
	c.setR(10); 
	Point Center;
	Center.setX(10);
	Center.setY(0);
	c.setCenter(Center);

	Point p;	//创建一个点
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);	//判断
	system("pause");
	return 0;
}