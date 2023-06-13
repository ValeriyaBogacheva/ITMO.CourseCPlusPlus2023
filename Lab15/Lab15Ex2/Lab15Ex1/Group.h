#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
#include "Student.h"
#include <list>
#include <algorithm>
#include <set>
using namespace std;

class Group
{
private:
	string name;
	multiset<Student*, compareStudent> masSt;
	multiset<Student*, compareStudent>::iterator iter;


public:
	int getSize();
	void addStudent(Student* newStudent);
	void delStudent(Student* oldStudent);
	Student* findStudent(string, string);
	void GroupSort();
	void GroupOut();
	Group(string name);
	Group();

	void setName(string newName);
	string getName();

};