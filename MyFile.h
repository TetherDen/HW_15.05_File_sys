#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "Student.h"
#include <vector>

class MyFile
{
	string _path;
public:
	MyFile(string path) { _path = path; }

	void writeStudentToFile(Student& student);
	void readStudentFromFile(vector<Student>& vec);
};