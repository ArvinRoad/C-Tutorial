#include<iostream>
using namespace std;

int* func02() {
	//ָ�뱾��Ҳ�Ǿֲ�������Ҳ�Ƿ���ջ�ϣ�ָ�뱣��������Ƿ����˶��������������ݵĵ�ַ�����ջ�ϵ�ָ�뱣�棬�����ǽ�����ͬ�Ͻ���������
	int* p = new int(10);	//����new�ؼ��֣����Խ����ݿ��ٵ���������������һֱ�����ǹ���ʦ�ͷŻ������������������
	return p;
}

int main3() {
	int* p = func02();
	cout << *p << endl;
	system("pause");
	return 0;
}