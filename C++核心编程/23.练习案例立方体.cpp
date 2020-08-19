#include<iostream>
using namespace std;

class Cube {	//��������
public:	//���ýӿ�
	void setL(int L) {m_L = L;}	//���ó�
	int getL() { return m_L; }	//��ȡ��
	void setW(int W) { m_W = W; }
	int getW() { return m_W; }
	void setH(int H) { m_H = H; }
	int getH() { return m_H; }
	int calculateS() {	//��ȡ���������
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	int calculateV() {	//��ȡ���������
		return m_L * m_W * m_H;
	}
	/*���ó�Ա�����ж������������Ƿ����*/
	bool isSameByClass(Cube &c) {	//c���������
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		return false;
	}
private:	//�������Գ����
	int m_L,m_W, m_H;
};
/*����ȫ�ֺ������ж������������Ƿ����*/
bool isSame(Cube &c1, Cube &c2) {	//���ô���ֵ
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}
int main23() {
	Cube c1; c1.setL(10); c1.setW(10); c1.setH(10);
	cout << "C1�����Ϊ��" << c1.calculateS() << endl; cout << "C1�����Ϊ��" << c1.calculateV() << endl;
	Cube c2; c2.setL(10); c2.setW(10); c2.setH(10);
	isSame(c1, c2);
	bool ret = isSame;	//ȫ�ֺ����ж�
	if (ret) {
		cout << "ȫ�ֺ���c1��c2����ȵ�" << endl;
	}else {
		cout << "ȫ�ֺ���c1��c2�ǲ���ȵ�" << endl;
	}
	ret = c1.isSameByClass(c2);	//��Ա�����ж�
	if (ret) {
		cout << "��Ա����c1��c2����ȵ�" << endl;
	}
	else {
		cout << "��Ա����c1��c2�ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;
}