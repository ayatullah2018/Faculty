#pragma once
#include<iostream>
using namespace std;
#include"Student.h"
class Graduate :public Student
{
private:
	int grad_year;

public:
	Graduate(int grad_year, int ID, string name);
	 void printInfo() override;
};
