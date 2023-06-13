#pragma once
#include <string>
#include"Department.h"
#include"Director.h"
#include"worker.h"
#include <vector>
using namespace std;
class Control
{
public:
	Control() {};
	void addWorker(string n, string s, string l, int a, string p);
	void addWorker(worker w);
	void setWorkerDepartment(worker w,Department* d);
	void setWorkerHours(worker w, int h);
	void setWorkerHours(worker w, vector<int> h);
	void setRate(worker w, int r);

	void addDirector(string n, string s, string l, int a, string p);
	void addDirector(Director d);
	void addDepartment(Director dr,Department d);
	void addDepartmentWorker(Director dr,Department d, worker w);
	bool saveWorkers();
	bool saveDirectors();
private:
	vector<worker> _workers;
	vector<Director> _directors;
	int findIndexWorker(worker w);
	int findIndexDirector(Director d);

};

