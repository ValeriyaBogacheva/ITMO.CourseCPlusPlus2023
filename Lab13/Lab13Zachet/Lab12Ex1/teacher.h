#pragma once
#include "human.h"
#include <string>
#include <iostream>
using namespace std;

class teacher : public human {
	// ����������� ������ teacher
public:
	void setData()
	{
		human::setData();
		cout << "������� ����� ������ => ";
		cin >> work_time;
	}
	void getData() {
		human::getData();
		cout << "����� ������: " << get_work_time()<<endl;
	}
	// ��������� ���������� ������� �����
	unsigned int get_work_time()
	{
		return this->work_time;
	}
private:
	// ������� ����
	unsigned int work_time;
};
