#pragma once
#include<iostream>
using namespace std;
#include<string>

template<typename NameType,typename AgeType>
class Person13 {
public:
	Person13(NameType name,AgeType age);
	void ShowPerson();
	NameType M_Name;
	AgeType M_age;
};
