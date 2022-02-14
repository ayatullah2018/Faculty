#include"Student.h"
#include"Graduate.h"
#include"Faculty.h"
#include"Undergraduate.h"
#include<iostream>

Faculty::Faculty()
{
	list = nullptr;
	list = new  Student * [200];
	studentsNumber = 0;
	int yearIndicator = 0;
}

void Faculty::addStudent(Student* student)
{
	if (studentsNumber >= 200)
		cout << "sorry no avialbe places for that student";
	else
	{
		list[studentsNumber] = student;
		studentsNumber++;
	}
}
void Faculty::dropStudent(int index)
{
	delete list[index];
	list[index] = list[studentsNumber-1];
	list[studentsNumber - 1] = NULL;
	studentsNumber--;
}
void Faculty::passAll()
{
	 undergradCounter = 0;
	gradCounter = 0;
	for (int i = 0; i < studentsNumber; i++)
	{
		if (list[i]->Type() == Undergrad) {
			Undergraduate* uTemp = dynamic_cast<Undergraduate*>(list[i]);

			if (!uTemp->pass(yearIndicator)) // How to solve?
			{
				undergradCounter++;
				continue;
			}
			else
			{
				string newname = list[i]->getName();
				int ID = list[i]->getID();
				dropStudent(i);
				Graduate* object1 = new Graduate(yearIndicator, ID, newname);
				addStudent(object1);
				gradCounter++;
			}
		}
	}
}
void Faculty::printInfo()
{
	for (int i = 0; i < studentsNumber; i++)
	{
		list[i]->printInfo();
	}
}