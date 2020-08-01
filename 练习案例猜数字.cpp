#include<iostream>
using namespace std;
#include<ctime>		//Time系统时间头文件包含

int main25() {

	/*系统随机生成一个1~100的数值，玩家进行猜测，如果猜错提示玩家数值过大或过小，如果猜对恭喜玩家并退出游戏*/
	//添加随机数种子，利用当前系统时间进行生成随机数。防止每次随机数都一样
	srand((unsigned int)time(NULL));
	int A = rand() % 100 + 1;	//rand()%100生成一个0~99的随机数值，rand是C++随机数生成。+1为0~100的随机数
	cout << "Rand的值为：" << A << endl;
	int B = 0;	//玩家输入的值
	cout << "请猜测：" << endl;
	while (1) {
		cin >> B;
		if (B > A) {
			cout << "过大了！" << endl;
		}
		else if (B == A) {
			cout << "恭喜您答对了" << endl;
			break;
		}
		else {
			cout << "过小了！" << endl;
		}
	}

	system("pause");

	return 0;
}