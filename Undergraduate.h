#pragma once
#include"Student.h"
#include<iostream>
using namespace std;
class Undergraduate :public Student
{
private:
	int current_year;
public:
	int getCurrentyear();
	Undergraduate(int current_year, int id, string name);
	void printInfo() override;
	bool pass(int &yearIndicator);
};