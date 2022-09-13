#include "SchoolSystem.h"
#include <iostream>
#include <string>

using namespace std;

void PrintMenu()
{
	int val;
	cout << "Huvud Meny";
	cout << "";
}

void SchoolSystem::Run()
{
	

	while (true)
	{
		//PrintMenu();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
		//if (input == 1) AddStudent();
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "Blabla";
	student.age = 123;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
