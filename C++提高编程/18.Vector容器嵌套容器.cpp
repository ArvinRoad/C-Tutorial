#include<iostream>
using namespace std;
#include<vector>

void test18() {	//容器嵌套容器<二维数组>
	vector<vector<int>> v;
	vector<int>v1;vector<int>v2;vector<int>v3;vector<int>v4;	//创建小容器
	for (int i = 0;i < 4;i++) {	//向小容器中添加数据
		v1.push_back(i + 1);v2.push_back(i + 2);v3.push_back(i + 3);v4.push_back(i + 4);
	}
	//将小容器插入到大容器中
	v.push_back(v1);v.push_back(v2);v.push_back(v3);v.push_back(v4);
	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++) {	//通过大容器，把所有数据遍历一遍 (*it)=容器vector<int>
		for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}
}

int main18(){
	test18();
	system("pause");
	return 0;
}