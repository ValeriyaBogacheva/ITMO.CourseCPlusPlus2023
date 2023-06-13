
#include "worker.h"
using namespace std;
worker::worker(string Name, string Surname, string LastName, int Age, string Phone) :Human(Name, Surname, LastName, Age, Phone)
{}
string worker::Display() const {
	ostringstream _cout;
	_cout << Human::Display();
	_cout << "Department: " << department->getDepartment() << endl;
	_cout << "Hours: ";

	for (auto it = begin(Hours_work); it != end(Hours_work); ++it) {
		if (next(it) != end(Hours_work)) {
			_cout << *it << ",";
		}
		else {
			_cout << *it;
		}
		
	}
	_cout << endl;
	_cout << "Salary:" << getSalary();
	_cout << endl << endl;
	return _cout.str();

}


void worker::setDepartment(Department* d) {
	this->department = d;
}

void worker::addHours(int hours) {
	this->Hours_work.push_back(hours);
}
void worker::addHours(vector<int> hours) {
	for (auto it = begin(Hours_work); it != end(Hours_work); ++it) {
		Hours_work.push_back(*it);
	}
}
void worker::setRate(int r) {

	this->rate = r;
}
std::string worker::getSalary() const{
	int h = 0;
	for (auto it = begin(Hours_work); it != end(Hours_work); ++it) {
		h+=*it;
	}
	return std::to_string(rate * h);
}

string worker::getFullName() const {
	return Human::Display();
}