#include"Graduate.h"
#include"Student.h"
#include<iostream>
using namespace std;

Graduate::Graduate(int grad_year, int ID, string name): Student(ID, name)
{
	this->grad_year = grad_year;
}
void Graduate::printInfo()
{
	cout << "here is the student ID" << "  " << this->getID() << endl;
	cout << "here is the student name" << "  " << this->getName() << endl;
	cout << "here is the grad year of the student" << "  " << grad_year <<endl;
}