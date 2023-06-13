#include <string>
#include <sstream>
#include <iostream>
#pragma once /* Защита от двойного подключения заголовочного файла */
using namespace std;

class human {
public:
	// Конструктор класса human
	virtual void setData() {
		cout << "Введите ФИО";
		cin >> name >> last_name >> second_name;
	}
	virtual void getData() {
		cout << name <<" " << last_name <<" " << second_name << endl;
	}
	// Получение ФИО человека
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};
