#pragma once
#include <string>
#include <sstream>

using namespace std;


class Human
{
public:
	Human(string Name, string Surname, string LastName, int Age, string Phone);
	virtual string Display() const;

private:
	string Name;
	string Surname;
	string LastName;
	string Phone;
	int Age;
	int rate;
};

