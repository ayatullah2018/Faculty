#pragma once
#include<iostream>
using namespace std;

enum type {Stud, Undergrad, Grad};

class Student
{
private:
	int id;
	string name;

public:
	Student(int id, string name);
	int getID();
	string getName();
	virtual void printInfo() = 0;
	virtual type Type();
};
