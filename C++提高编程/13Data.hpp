#pragma once
#include<iostream>
using namespace std;
#include<string>

template<typename NameType,typename AgeType>
class Person13a1 {
public:
	Person13a1(NameType name,AgeType age);
	void ShowPerson();
	NameType M_Name;
	AgeType M_Age;
};

template<typename NameType,typename AgeType>
Person13a1<NameType, AgeType>::Person13a1(NameType name,AgeType age) {
	this->M_Name = name;
	this->M_Age = age;
}
template<typename NameType,typename AgeType>
void Person13a1<NameType, AgeType>::ShowPerson() {
	cout << "Name: " << this->M_Name << endl;
	cout << "Age: " << this->M_Age << endl;
}