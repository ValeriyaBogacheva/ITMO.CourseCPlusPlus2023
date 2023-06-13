#include "Human.h"

Human::Human(string Name, string Surname, string LastName, int Age, string Phone) {
	this->Name = Name;
	this->Surname = Surname;
	this->LastName = LastName;
	this->Age = Age;
	this->Phone = Phone;
}
string Human::Display() const {

	ostringstream Fullname;
	Fullname << "Full name: " << this->Surname << " " << this->Name << " " << this->LastName << endl << "Age:" << this->Age << endl << "Phone: " << this->Phone << endl;
	return Fullname.str();
}
