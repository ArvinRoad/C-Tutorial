#include"MyArray.hpp"
#include<string>

void printIntArray(MyArray<int>&arr) {
	for (int i = 0;i < arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}
void testShuzL() {
	MyArray<int> arr1(5);
	MyArray<int>arr3(100);	//测试深拷贝
	for (int i = 0;i < 5;i++) {	//测试尾插
		arr1.Push_Back(i);	//利用尾插法向数组中插入数据
	}
	cout << "Arr1的打印输出为: " << endl;
	arr3 = arr1;
	printIntArray(arr1);
	cout << "Arr1的容量为: " << arr1.getCapacity() << endl;	//测试Arr1的容量
	cout << "Arr1的大小为: " << arr1.getSize() << endl;	//测试Arr1的大小
	MyArray<int>arr2(arr1);	//测试拷贝构造函数
	cout << "Arr2的打印输出为: " << endl;
	printIntArray(arr2);
	arr2.Pop_Back();	//尾删
	cout << "Arr2的容量为: " << arr2.getCapacity() << endl;	//测试Arr1的容量
	cout << "Arr2大小为: " << arr2.getSize() << endl;	//测试Arr1的大小
}
class PersonS {	//自定义数据类型测试
public:
	PersonS() { }
	PersonS(string name,int age){
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void printPerosnArray(MyArray <PersonS>&arr) {
	for (int i = 0;i < arr.getSize();i++) {
		cout << "姓名: " << arr[i].m_Name << "年龄" << arr[i].m_Age << endl;
	}
}
void testPersonS() {
	MyArray<PersonS>arr(10);
	PersonS p1("李四", 15);PersonS p2("张三", 18);PersonS p3("李莉", 22);PersonS p4("王丽", 19);
	arr.Push_Back(p1);arr.Push_Back(p2);arr.Push_Back(p3);arr.Push_Back(p4);	//将数据插入到数组中
	printPerosnArray(arr);	//打印数组
	cout << "Arr的容量为: " << arr.getCapacity() << endl;	//输出容量
	cout << "Arr的大小为: " << arr.getSize() << endl;	//输出大小
}

int main15() {
	testShuzL();
	testPersonS();
	system("pause");
	return 0;
}