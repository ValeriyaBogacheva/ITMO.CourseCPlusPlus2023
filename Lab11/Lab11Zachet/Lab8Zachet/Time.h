#pragma once
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Time
{
public:
	class ExTime 
	{
		public:
			string text;
			int iValue;
			ExTime(string m, int v) {
				text = m;
				iValue = v;
			}
	};
	Time();
	~Time();
	Time(int, int, int);
	void Display();
	Time sumTime(Time);
	void setTime();
	const int get_h();
	const int get_m();
	const int get_s();
	Time getTypeTime();
	Time operator+(const Time&) const;
	Time operator-(const Time&) const;
	int operator+(const int) const;
	int operator-(const int) const;
	operator int()const;
	bool operator ==(const Time&)const;
	bool operator >(const Time&)const;
	bool operator <(const Time&)const;
private:
	void checkTime();
	int hours;
	int minutes;
	int seconds;
};

