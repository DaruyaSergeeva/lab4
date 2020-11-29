/*
Person - класс информационных объектов, каждый из которых хранит данные о персоне
*/
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
private:
	int idP; //surName
	int id;  //name
	string month; //phone
	int year; //inn
	int sum;
public:
	Person(int idP, int id, string month, int year);
	Person(Person& person);
	Person();
	~Person();

	int getIdP();
	int getId();
	string getMonth();
	int getYear();

	friend ostream& operator<<(ostream& cout, Person& person);
};
