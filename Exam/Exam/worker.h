#pragma once
#include "Human.h"
#include "Department.h"
#include <vector>

class worker:public Human
{
public:
	worker(string Name, string Surname, string LastName, int Age, string Phone);
	string Display() const;
	void addHours(int hours);
	void addHours(vector<int> hours);
	void setDepartment(Department* department);
	void setRate(int r);
	string getSalary() const;
	string getFullName() const;
private:
	int rate;
	vector<int> Hours_work;
	Department* department;
};

