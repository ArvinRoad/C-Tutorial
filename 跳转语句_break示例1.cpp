#include<iostream>
using namespace std;

int main32() {
	//switch语句
	cout << "请选择副本难度：" << endl;
	cout << "\t1.普通难度" << endl;
	cout << "\t2.中等难度" << endl;
	cout << "\t3.困难难度" << endl;
	int select = 0;
	cin >> select;
	switch (select){
	case 1:
		cout << "你选择的是普通难度。" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度。" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度！" << endl;
		break;
	}

	system("pause");

	return 0;
}