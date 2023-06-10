#pragma once
#include <iostream>
#include <windows.h>
#include <string>


class Time
{
public:
	Time();
	~Time();
	Time(int, int, int);
	void Display();
	Time sumTime(Time);
	const int get_h();
	const int get_m();
	const int get_s();
	Time getTypeTime();
private:
	void checkTime();
	int hours;
	int minutes;
	int seconds;
};

