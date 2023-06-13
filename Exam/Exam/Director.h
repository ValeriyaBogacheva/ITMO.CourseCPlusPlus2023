#pragma once
#include "Human.h"
#include "Department.h"
#include <map>
#include <vector>
#include "worker.h"
using namespace std;
class Director:public Human
{
public:
	Director(string Name, string Surname, string LastName, int Age, string Phone);
	string Display() const;
	void addDepartment(Department department);
	void addDepartmentWorker(Department d, worker w);
	string getFullName() const;
private:
	map<Department, vector<worker>> workers;
};

