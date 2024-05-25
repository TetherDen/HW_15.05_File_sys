#include "Student.h"

Student::Student(string name, string sName, int age)
	: _name(name),_sName(sName),_age(age)
{
}

void Student::show()
{
	cout << "Name: " << _name << " " << "Sname: " << _sName << " " << "Age: " << _age<<endl;
}

string Student::getName()
{
	return _name;
}

string Student::getSname()
{
	return _sName;
}

int Student::getAge()
{
	return _age;
}

void Student::setName(string name)
{
	_name = name;
}

void Student::setSname(string sName)
{
	_sName = sName;
}

void Student::setAge(int age)
{
	_age = age;
}
