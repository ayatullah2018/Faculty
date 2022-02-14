#include"Student.h"
#include<iostream>
using namespace std;
Student::Student(int id, string name) 
{
	this->id = id;
	this->name = name;
}
int Student::getID()
{
	return id;
}
string Student::getName()
{
	return name;
}

type Student::Type() {
	return type::Stud;
}

void Student::printInfo()
{
	

}