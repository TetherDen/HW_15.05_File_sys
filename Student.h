#pragma once
#include <iostream>
using namespace std;
#include <string>


class Student
{
	string _name;
	string _sName;
	int _age;
public:
	Student(string name, string sName, int age);

	void show();
	string getName();
	string getSname();
	int getAge();

	void setName(string name);
	void setSname(string sName);
	void setAge(int age);

};

