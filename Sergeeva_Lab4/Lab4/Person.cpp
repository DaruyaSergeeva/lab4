#include "Person.h"

Person::Person(int idP, int id, string month, int salary)
{
	this->idP = idP;
	this->id = id;
	this->month = month;
	this->salary = salary;
}

Person::Person(Person& person)
{
	this->idP = person.idP;
	this->id = person.id;
	this->month = person.month;
	this->salary = person.salary;
}

Person::Person()
{
	this->idP = 0;
	this->id = 0;
	this->month = "";
	this->salary = 0;
}

Person::~Person()
{
}

int Person::getId()
{
	return id;
}

string Person::getMonth()
{
	return month;
}

int Person::getIdP()
{
	return idP;
}

int Person::getSalary()
{
	return salary;
}

ostream& operator<<(ostream& cout, Person& person)
{
	return cout
		<< setw(10) << person.idP
		<< setw(10) << person.id
		<< setw(12) << person.month
		<< setw(10) << person.salary;
}


