/*******************************************************************
��������� ������ ��������� ������:
���������� �������, ��������� � ������������� ���������� � ��������.
�� ������ ������� ������� ��������� ������: �������, ���, ���, ����� ��������.
�������� ����������� � �������� ������ ������ ("���� ������") � ������ ���.
����: �. �. ��������
����: 02.11.2020
********************************************************************/

#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

#include "Person.h"
#include "PersonSBTree.h"

using namespace std;

int main()
{
	// ����������� �� ���������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	// ------ ������������ ���� ������ (�������� ������ ������) � ��������
	PersonSBTree dataBase;
	PersonSBTree dataBase1;

	// ������� � ���� ������ ��������, ��������� ��� ���������
	Person p1(1, 423, "Jan",  "44-44-44");
	dataBase.insert(p1);
	dataBase1.insert1(p1);
	Person p2(2, 231, "Fab",  "55-55-55");
	dataBase.insert(p2);
	dataBase1.insert1(p2);
	
	// ������� � ���� ������ ��������, ��������� � ������������ ������
	dataBase.insert(*new Person(3, 321, "Jan",  "66-66-66"));
	dataBase1.insert1(*new Person(3, 321, "Jan", "66-66-66"));
	dataBase.insert(*new Person(4, 213, "May",  "77-77-77"));
	dataBase1.insert1(*new Person(4, 213, "May", "77-77-77"));

	dataBase.insert(*new Person(5, 132, "Fab",  "11-11-11"));
	dataBase1.insert1(*new Person(5, 132, "Fab", "11-11-11"));
	dataBase.insert(*new Person(6, 321, "May",  "22-22-22"));
	dataBase1.insert1(*new Person(6, 321, "May", "22-22-22"));


	cout << "����������� 1�:" << endl;
	cout << dataBase << endl;

	// ------ ����� � ���� ������ �� �����
	int key = 2; // 1500
	if (dataBase.search(key, p1)) {
		cout << "����� ������� � IdP = " << key << " �������:" << endl;
		cout << p1 << endl << endl;
	}
	else
		cout << "����� ������� � IdP = " << key << " �� �������." << endl << endl;
	// ���������� �� Id
	cout << "���� - Id" << endl;
	cout << endl;
	cout << "����������� 1�:" << endl;
	cout << dataBase1 << endl;

	key = 321;
	if (dataBase1.search1(key, p1)) {
		cout << "����� ���� ���������� ������� � Id = " << key << " �������:" << endl;
		cout << p1 << endl << endl;
	}else
	cout << "����� ������� � Id = " << key << " �� �������." << endl << endl;


	// ------ �������� ������� �� ���� ������ �� �����
	key = 2; // 1500
	if (dataBase.erase(key)) {
		cout << "������� � IdP = " << key << " �������:" << endl;		
		cout << "����������� 1�:" << endl;
		cout << dataBase;
	}
	else
		cout << "��������� ������� � IdP = " << key << " �� ����������." << endl;
	cout << endl;
	
	dataBase.clear();
	dataBase1.clear();
	system("pause");
	return 0;
}
