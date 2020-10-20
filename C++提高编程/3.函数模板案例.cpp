#include<iostream>
using namespace std;

template<typename T>
void mySwap3(T &a,T &b) {
	T temp = a;a = b;b = temp;
}
template<typename T>
void mySort3(T arr[],int len) {	//排序算法函数
	for (int i = 0;i < len;i++) {
		int max = i;	//认定最大值下标
		for (int j = i + 1;j < len;j++) {
			if (arr[max] < arr[j]) {	//我们认定的最大值比遍历出的数值小，说明j小标的元素才是最大值
				max = j;	//更新最大值

			}
		}
		if (max != i) {
			mySwap3(arr[max], arr[i]);	//交换max和i元素
		}
	}
}
template<typename T>
void printArray(T arr[],int len) {	//打印函数
	for (int i = 0;i < len;i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}
void test3() {
	char charArr[] = "badcfe";	//测试char数组
	int num = sizeof(charArr) / sizeof(char);
	mySort3(charArr, num);
	printArray(charArr, num);
}
void test3a1() {
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort3(intArr, num);
	printArray(intArr, num);
}

int main3() {
	test3();
	test3a1();
	system("pause");
	return 0;
}