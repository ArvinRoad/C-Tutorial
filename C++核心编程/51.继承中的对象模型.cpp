#include<iostream>
using namespace std;

class Base {	//����
public:
	int M_A;
protected:
	int M_B;
private:
	int M_C;
};
class Sone :public Base {	//�����̳�
	int M_D;
};
class Sone02 :protected Base {	//�����̳�

};
class Sone03 :private Base {	//˽�м̳�

};

void test42() {
	//���Ϊ16bit((3*int) = 12+this(int)=16)
	//���������зǾ�̬�ĳ�Ա���Զ��ᱻ����̳���ȥ
	//������˽�еĳ�Ա���ԣ��Ǳ������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���
	cout << "Size of Sone = " << sizeof(Sone) << endl;
}

int main51() {
	test42();
	system("pause");
	return 0;
}