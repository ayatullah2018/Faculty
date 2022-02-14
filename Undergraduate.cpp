#include<iostream>
#include"Undergraduate.h"
using namespace std;


int Undergraduate::getCurrentyear()
{
	return current_year;
}
Undergraduate::Undergraduate(int current_year, int id, string name) : Student( id,  name)
{
	this->current_year = current_year;
}
void Undergraduate::printInfo()
{
	cout << "here is the student ID" << "  " << this->getID() << endl;
	cout << "here is the student name" << "  " << this->getName() << endl;
	cout << "here is the current year of the student" << "  " << current_year << endl;

}
bool Undergraduate::pass(int &yearIndicator)
{
	current_year = current_year + 1;
	
	if (current_year >= 5)
	{
		yearIndicator = current_year - 5;
		return true;
	}
	return false;

}