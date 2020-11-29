#include "Person.h"

Person::Person(int idP, int id, string month, int year)
{
	this->idP = idP;
	this->id = id;
	this->month = month;
	this->year = year;
}

Person::Person(Person& person)
{
	this->idP = person.idP;
	this->id = person.id;
	this->month = person.month;
	this->year = person.year;
}

Person::Person()
{
	this->idP = 0;
	this->id = 0;
	this->month = "";
	this->year = 0;
}

Person::~Person()
{
}

int Person::getIdP()
{
	return idP;
}

int Person::getId()
{
	return id;
}

string Person::getMonth()
{
	return month;
}

int Person::getYear()
{
	return year;
}

ostream& operator<<(ostream& cout, Person& person)
{
	return cout << setw(10) << person.idP
		<< setw(10) << person.id
		<< setw(12) << person.month
		<< setw(10) << person.year;
}