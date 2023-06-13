#include "Director.h"


Director::Director(string Name, string Surname, string LastName, int Age, string Phone) :Human(Name, Surname, LastName, Age, Phone) {};

string Director::Display() const {
	ostringstream _cout;
	_cout << Human::Display();
	_cout << "Workers: \n";

	for (auto it = begin(workers); it != end(workers); ++it) {
		Department depart = (*it).first;
		_cout << "Department "<<depart.getDepartment() << ": \n";
		for (auto i = begin((*it).second); i != end((*it).second); ++i) {
			worker w = *i;
			if (next(i) != end((*it).second)) {
				
				_cout << w.getFullName();
			}
			else
				_cout << w.getFullName();
		}
		_cout << endl<<endl;

	}
	return _cout.str();

}
void Director::addDepartment(Department department) {

	for (auto it = begin(workers); it != end(workers); ++it) {
		Department d = (*it).first;
		if (d.getDepartment() == department.getDepartment()) {
			return;
		}
	}
	vector <worker> w = {};
	Department d = Department(123);
	workers.insert(make_pair(department, w));

	
}
string Director::getFullName() const {
	return Human::Display();
}
void Director::addDepartmentWorker(Department d, worker w) {
	for (auto it = begin(workers); it != end(workers); ++it) {
		Department d1 = (*it).first;

		if (d1.getDepartment() == d.getDepartment()) {
			(*it).second.push_back(w);
		}
	}
}
