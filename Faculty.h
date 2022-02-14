#pragma once
#include"Student.h"
#include"Graduate.h"
#include"Undergraduate.h"
#include<iostream>
class Faculty
{
private:
	Student** list;
	int studentsNumber;
	int yearIndicator;
	int undergradCounter ;
	int gradCounter ;

public:
	Faculty();
	void addStudent(Student* student);
	void dropStudent(int index);
	void passAll();
	void printInfo();

};
