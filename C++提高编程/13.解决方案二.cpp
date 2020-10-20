#include"13Data.hpp"

void test13a1() {
	Person13a1<string, int>p("Tom", 22);
	p.ShowPerson();
}

int main13a1() {
	test13a1();
	system("pause");
	return 0;
}