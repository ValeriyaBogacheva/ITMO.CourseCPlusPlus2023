#include <string>
#include <sstream>
#include <iostream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
using namespace std;

class human {
public:
	// ����������� ������ human
	virtual void setData() {
		cout << "������� ���";
		cin >> name >> last_name >> second_name;
	}
	virtual void getData() {
		cout << name <<" " << last_name <<" " << second_name << endl;
	}
	// ��������� ��� ��������
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};
