#include "Control.h"
#include <fstream>
void Control::addWorker(string n, string s, string l, int a, string p) {
	worker w1 = worker(n,s,l,a,p);
	_workers.push_back(w1);
}
void Control::addWorker(worker w) {
	_workers.push_back(w);
}

int Control::findIndexWorker(worker w) {
	for (int i = 0; i < _workers.size(); i++) {
		if (_workers[i].getFullName() == w.getFullName()) {
			return i;
		}
	}
}
int Control::findIndexDirector(Director dr) {
	for (int i = 0; i < _directors.size(); i++) {
		if (_directors[i].getFullName() == dr.getFullName()) {
			return i;
		}
	}
}

void Control::setWorkerDepartment(worker w, Department* d) {
	_workers[findIndexWorker(w)].setDepartment(d);
}

void Control::setWorkerHours(worker w, int h) {
	_workers[findIndexWorker(w)].addHours(h);
}
void Control::setWorkerHours(worker w, vector<int> h) {
	_workers[findIndexWorker(w)].addHours(h);
}
void Control::setRate(worker w, int r) {
	_workers[findIndexWorker(w)].setRate(r);
}


void Control::addDirector(string n, string s, string l, int a, string p) {
	Director d1 = Director(n, s, l, a, p);
	_directors.push_back(d1);
}
void Control::addDirector(Director w) {
	_directors.push_back(w);
}
void Control::addDepartment(Director dr, Department d) {
	_directors[findIndexDirector(dr)].addDepartment(d);
}
void Control::addDepartmentWorker(Director dr, Department d, worker w) {
	_directors[findIndexDirector(dr)].addDepartmentWorker(d, w);
}

bool Control::saveWorkers() {

	std::ofstream out;
	out.open("_workers.txt");
	if (out.is_open())
	{
		for (int i = 0; i < _workers.size(); i++) {
			out << _workers[i].Display() << std::endl;
		}
	}
	out.close();
	return true;
}
bool Control::saveDirectors() {

	std::ofstream out;
	out.open("_directors.txt");
	if (out.is_open())
	{
		for (int i = 0; i < _directors.size(); i++) {
			out << _directors[i].Display() << std::endl;
		}
	}
	out.close();
	return true;
}