#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test16() {
	vector<int> v;	//��MyArray<int> p; һ��
	//��������������
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	vector<int>::iterator itBegin = v.begin();	//ͨ�����������������е����ݣ�v.begin();����ʼ������ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();	//������������ָ�����������һ��Ԫ����һ��λ��
	while (itBegin!=itEnd){	//��һ�ֱ�����ʽ
		cout <<"��һ�ֱ�����ʽ:"<< *itBegin << endl;
		itBegin++;
	}
}
void test16a1() {	//�ڶ��ֱ�����ʽ
	vector<int> v;
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << "�ڶ��ֱ�����ʽ:" << *it << endl;
	}
}
void myPerint(int val) {
	cout << "�����ֱ�����ʽ��" << val << endl;
}
void test16a2() {	//�����ֱ�����ʽ������STL�ṩ�����㷨
	vector<int> v;
	v.push_back(10);v.push_back(20);v.push_back(30);v.push_back(40);
	for_each(v.begin(),v.end(),myPerint);	//���ûص�ԭ��
}

int main16() {
	test16();
	test16a1();
	test16a2();
	system("pause");
	return 0;
}