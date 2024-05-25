#include "MyFile.h"
#include "Student.h"


void MyFile::writeStudentToFile(Student& student)
{
	ofstream file;
	file.open(_path, ofstream::app);
	if (!file.is_open())
	{
		cout << "File did not open!" << endl;
	}
	else
	{
		file << student.getName();
		file << "\n";
		file << student.getSname();
		file << "\n";
		file << student.getAge();
		file << "\n";

		file.close();
	}
}

void MyFile::readStudentFromFile(vector<Student>& vec)
{
	ifstream fin;
	fin.open(_path, ifstream::in);
	if (!fin.is_open())
	{
		cout << "File did not open!" << endl;
	}
	else
	{
		string name, sName;
		int age;
		while (fin >> name >> sName >> age)
		{
			Student student(name, sName, age);
			vec.push_back(student);
		}
		fin.close();
	}
}
