#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include "Student.h"
#include "MyFile.h"
#include <vector>


int main()
{
	Student student1("StudName1", "StudSname1", 33);
	Student student2("name", "sname", 55);
	Student student3("newStud", "newStud", 11);
	//student1.show();

	string path = "students.txt";

	MyFile myFile(path);

	myFile.writeStudentToFile(student1);
	myFile.writeStudentToFile(student2);
	myFile.writeStudentToFile(student3);

	vector<Student> studVec;
	
	myFile.readStudentFromFile(studVec);
	for (auto el : studVec)
	{
		el.show();
	}

	return 0;
}


