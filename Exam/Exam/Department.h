#pragma once
#include <string>
class Department
{
public :
	Department(int id);
	Department();
	std::string getDepartment();
	friend bool operator<(const Department& _Left, const Department& _Right) {
		return _Left.id < _Right.id;
	}
private:
	int id;
};

