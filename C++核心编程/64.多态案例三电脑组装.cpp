#include<iostream>
using namespace std;

/*
	电脑类方法
*/
class CPU {
public:
	virtual void calculate() = 0;
};
class VideoCard {
public:
	virtual void display() = 0;
};
class Memory {
public :
	virtual void storage() = 0;
};
class Computer {
public:
	Computer(CPU *cpu,VideoCard *vc,Memory *mem) {
		M_cpu = cpu; M_vc = vc; M_mem = mem;
	}
	void work() {
		M_cpu->calculate();
		M_vc->display();
		M_mem->storage();
	}
	~Computer() {
		if (M_cpu != NULL) {
			delete M_cpu; M_cpu = NULL;
		}
		if (M_vc != NULL) {
			delete M_vc; M_vc = NULL;
		}
		if (M_mem != NULL) {
			delete M_mem; M_mem = NULL;
		}
	}
private:
	CPU* M_cpu;
	VideoCard* M_vc;
	Memory* M_mem;
};
/*
	厂商类
*/
class IntelCPU :public CPU {
public:
	virtual void calculate() {
		cout << "Intel的CPU开始工作" << endl;
	}
};
class IntelVdeoCard :public VideoCard {
public:
	virtual void display() {
		cout << "Intel的GPU开始工作" << endl;
	}
};
class IntelMemory : public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存条开始运行" << endl;
	}
};
class LenovoCPU :public CPU {
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始工作" << endl;
	}
};
class LenovoVideoCard :public VideoCard {
public:
	virtual void display() {
		cout << "Lenovo的GPU开始工作" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo的内存条开始运行" << endl;
	}
};
/*
	组装电脑
*/
void bate() {
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVdeoCard;
	Memory* intelMem = new IntelMemory;
	Computer* computer = new Computer(intelCPU, intelCard, intelMem);
	computer->work();
	delete computer;
	cout << "——————————" << endl;
	Computer* computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "——————————" << endl;
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVdeoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}


int main64() {
	bate();
	system("pause");
	return 0;
}