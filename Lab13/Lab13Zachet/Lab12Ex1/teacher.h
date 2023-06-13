#pragma once
#include "human.h"
#include <string>
#include <iostream>
using namespace std;

class teacher : public human {
	// Конструктор класса teacher
public:
	void setData()
	{
		human::setData();
		cout << "Введите время работы => ";
		cin >> work_time;
	}
	void getData() {
		human::getData();
		cout << "Время работы: " << get_work_time()<<endl;
	}
	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}
private:
	// Учебные часы
	unsigned int work_time;
};
