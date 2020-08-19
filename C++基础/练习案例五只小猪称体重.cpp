#include<iostream>
using namespace std;

int main42() {
	/*
	算法：int max = 0 访问数组中的每个数，如果这个元素比我认定的最大值要大就更新我的最大值
	*/
	int arr[5] = { 300,350,200,400,250 };	//五只小猪数组
	int max = 0;	//设立最大值存储
	for (int num = 0; num < 5; num++) {
		if (arr[num]>max){	//如果访问的数组中的元素比max值大，更新最大值
			max = arr[num];
		}
	}
	cout << "最大的小猪体重为：" << max << endl;
	system("pause");

	return 0;
}