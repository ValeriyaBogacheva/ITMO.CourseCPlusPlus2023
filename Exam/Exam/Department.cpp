#include "Department.h"
Department::Department() {
	id = -1;
}
Department::Department(int id) {
	this->id = id;
}
std::string Department::getDepartment() {
	return std::to_string(id);
}
