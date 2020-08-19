#include<iostream>
using namespace std;
class Point {	//���࣬�Զ�����������
public:
	void setX(int X) { m_X = X; }
	int getX() { return m_X; }
	void setY(int Y) { m_Y = Y; }
	int getY() { return m_Y; }
private:
	int m_X, m_Y;
};
class Circle {	//Բ��
public:
	void setR(int R) { m_R = R; }	//���ð뾶
	int getR() { return m_R; }	//��ȡ�뾶
	void setCenter(Point Center) { m_Center = Center; }
	Point getCenter() { return m_Center; }
private:
	int m_R;	//�뾶
	Point m_Center;	//Բ��
};
/*�жϵ��Բ�Ĺ�ϵ*/
void isInCircle(Circle &c,Point &p) {
	//��������֮��ľ��� ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��" << endl;
	}else if (distance > rDistance) {
		cout << "����Բ��" << endl;
	}else {
		cout << "����Բ��" << endl;
	}
}
int main24() {
	Circle c;	//����һ��Բ
	c.setR(10); 
	Point Center;
	Center.setX(10);
	Center.setY(0);
	c.setCenter(Center);

	Point p;	//����һ����
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);	//�ж�
	system("pause");
	return 0;
}