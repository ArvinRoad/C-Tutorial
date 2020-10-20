#pragma once
#include<iostream>
using namespace std;

template<typename ShuzU>
class MyArray {
public:
	MyArray(int capacity) {	//�вι��죬�����������
		//cout << "MyArray�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new ShuzU[this->m_Capacity];
	}
	MyArray(const MyArray& arr) {
		//cout << "MyArray�����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new ShuzU[arr.m_Capacity];	//���
		for (int i = 0;i < this->m_Size;i++) {	//��arr�е����ݶ���������
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator = (const MyArray &arr){	//operator= ��ֹǳ��������:a=b=c
		//cout << "Opperator=����" << endl;
		if (this->pAddress != NULL) {	//���ж�ԭ�������Ƿ������ݣ���������ͷ�
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;	//���
		this->m_Size = arr.m_Size;
		this->pAddress = new ShuzU[arr.m_Capacity];
		for (int i = 0;i <this->m_Size;i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;	//��������
	}
	void Push_Back(const ShuzU &val){	//β�巨
		if (this->m_Capacity == this->m_Size) {	//�ж������Ƿ���ڴ�С
			return;
		}
		this->pAddress[this->m_Size] = val;	//��ĩβ���������
		this->m_Size++;	//���������С
	}
	void Pop_Back(){	//βɾ��,���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}
	ShuzU &operator[](int index) {	//ͨ���±귽ʽ���������е�Ԫ��,��&�ú���������Ϊ��ֵ����
		return this->pAddress[index];
	}
	int getCapacity() {	//������������
		return this->m_Capacity;
	}
	int getSize() {	//���������С
		return this->m_Size;
	}
	~MyArray(){	//��������
		if (this->pAddress != NULL) {
			//cout << "MyArray������������" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	ShuzU* pAddress;	//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;	//��������
	int m_Size;	//����Ĵ�С
};