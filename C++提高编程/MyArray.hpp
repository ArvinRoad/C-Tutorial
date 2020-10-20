#pragma once
#include<iostream>
using namespace std;

template<typename ShuzU>
class MyArray {
public:
	MyArray(int capacity) {	//有参构造，传入参数容量
		//cout << "MyArray有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new ShuzU[this->m_Capacity];
	}
	MyArray(const MyArray& arr) {
		//cout << "MyArray拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new ShuzU[arr.m_Capacity];	//深拷贝
		for (int i = 0;i < this->m_Size;i++) {	//将arr中的数据都拷贝过来
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArray& operator = (const MyArray &arr){	//operator= 防止浅拷贝问题:a=b=c
		//cout << "Opperator=调用" << endl;
		if (this->pAddress != NULL) {	//先判断原来堆区是否有数据，如果有先释放
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;	//深拷贝
		this->m_Size = arr.m_Size;
		this->pAddress = new ShuzU[arr.m_Capacity];
		for (int i = 0;i <this->m_Size;i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;	//返回自身
	}
	void Push_Back(const ShuzU &val){	//尾插法
		if (this->m_Capacity == this->m_Size) {	//判断容量是否等于大小
			return;
		}
		this->pAddress[this->m_Size] = val;	//在末尾插入该数据
		this->m_Size++;	//更新数组大小
	}
	void Pop_Back(){	//尾删法,让用户访问不到最后一个元素，即为尾删。逻辑删除
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}
	ShuzU &operator[](int index) {	//通过下标方式访问数组中的元素,加&让函数可以作为左值引用
		return this->pAddress[index];
	}
	int getCapacity() {	//返回数组容量
		return this->m_Capacity;
	}
	int getSize() {	//返回数组大小
		return this->m_Size;
	}
	~MyArray(){	//析构函数
		if (this->pAddress != NULL) {
			//cout << "MyArray析构函数调用" << endl;
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	ShuzU* pAddress;	//指针指向堆区开辟的真实数组
	int m_Capacity;	//数组容量
	int m_Size;	//数组的大小
};