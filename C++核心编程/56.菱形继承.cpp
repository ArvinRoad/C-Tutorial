#include<iostream>
using namespace std;
class Animal {	//�����࣬�����
public:
	int M_Age;
};
class Sheep :virtual public Animal {	//���࣬��̳�

};
class Tuo :virtual public Animal {	//����

};
class SheepTuo :public Sheep, public Tuo {

};

void test49() {
	SheepTuo st;
	st.Sheep::M_Age = 18;	//������̳п���һ������
	st.Tuo::M_Age = 28;
	cout << "st.Sheep::M_Age = " << st.Sheep::M_Age << endl;
	cout << "st.Tuo::M_Age = " << st.Tuo::M_Age << endl;
	cout << "st.M_Age = " << st.M_Age << endl;
}

int main56() {
	test49();
	system("pause");
	return 0;
}