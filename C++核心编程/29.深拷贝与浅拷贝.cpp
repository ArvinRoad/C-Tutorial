#include<iostream>
using namespace std;

class Person07{
public:
	Person07() { cout << "Person��Ĭ�Ϲ��캯�����ã�" << endl; }
	Person07(int age,int heigth) { 
		m_Age = age;
		m_Height = new int(heigth);	//�½�һ���ռ�(����),m_Height�����½��Ŀռ�,��Ҫ�ֶ��ͷ�
		cout << "Person���вι��캯�����ã�" << endl; 
	}
	~Person07(){ //�������룬�����캯���п��ٵĶѿռ��ͷ�
		if (m_Height != NULL) {	//�жϣ����m_Height�Ŀռ�û���ͷţ���ô���ǽ����ͷŲ���
			delete m_Height;	//�ͷſռ�
			m_Height = NULL;	//��ֹҰָ��ĳ��֣������ٴν����ÿղ������������Ƕϵ�����쳣
		}
		cout << "Person�������������ã�" << endl; 
	}
	Person07(const Person07& P) {	//�ֶ�ʵ�ֿ������캯�������ǳ��������������
		cout << "Person�Ŀ������캯���ĵ��ã�" << endl;
		m_Age = P.m_Age;
		//m_Height = P.m_Height;	//������Ĭ�����ɾ������д���
		m_Height = new int(*P.m_Height);	//�������
	}

	int m_Age; 
	int* m_Height;	//����һ��ָ�����
};

void test12(){
	Person07 P1(18,160);
	cout << "P1��AGEΪ��" << P1.m_Age << endl;
	cout << "P1��HeightΪ��" << *P1.m_Height << endl;	//�⿪�������
	Person07 P2(P1);	//ǳ��������
	cout << "P2��AGEΪ��" << P2.m_Age << endl;
	cout << "P2��HeightΪ��" << *P2.m_Height << endl;	//�⿪�������
	
}

int main29() {
	test12();
	system("pause");
	return 0;
}