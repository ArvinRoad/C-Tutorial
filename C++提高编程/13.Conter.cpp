#include"13Data.h"

template<typename NameType, typename AgeType>
Person13<NameType, AgeType>::Person13(NameType name, AgeType age) {
	this->M_Name = name;
	this->M_age = age;
}
template<typename NameType, typename AgeType>
void Person13<NameType, AgeType>::ShowPerson() {
	cout << "Name: " << this->M_Name << endl;
	cout << "Age: " << this->M_age << endl;
}