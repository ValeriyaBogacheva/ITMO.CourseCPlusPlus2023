
#include "Time.h"
#include <iostream>
#include <string>

using namespace std;

Time::Time() {
	hours = 0;
	minutes = 0;
	seconds = 0;
}
Time::Time(int h, int m, int s) {
	string txt = "Ошибка времени, большое значение ( Максимальный формат: 23:59:59 ) ";
	if(h>23)
		throw ExTime(txt, h);
	else if (m > 59)
		throw ExTime(txt, m);
	else if (s > 59)
		throw ExTime(txt, s);
	hours = h;
	minutes = m;
	seconds = s;
	checkTime();
}
Time::~Time() {}
void Time::checkTime() {

	if (seconds / 60 >= 1) {
		minutes += seconds / 60;
		seconds = seconds - 60 * (seconds / 60);
	}
	if (minutes / 60 >= 1) {
		hours += minutes / 60;
		minutes = minutes - 60 * (minutes / 60);
	}
	string txt = "Отрицательное значение:" + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
	if (seconds < 0) {
		throw ExTime(txt, seconds);
	}
	else if(minutes < 0) {
		throw ExTime(txt, minutes);
	}
	else if (hours < 0) {
		throw ExTime(txt, hours);
	}
	txt = "Большое значение:" + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
	if (seconds > 59) {
		throw ExTime(txt, seconds);
	}
	else if (minutes > 59) {
		throw ExTime(txt, minutes);
	}
	else if (hours > 24) {
		throw ExTime(txt, hours);
	}
	/*if (seconds < 0) {
		abs(seconds) / 60;
		int mm = abs(seconds / 60) + 1;
		minutes -= mm;
		seconds = seconds + 60 * mm;
	}
	if (minutes < 0) {
		
		int mh = abs(minutes / 60) + 1;
		if (hours-mh < 0)
			throw ExTime("Отрицательное значение:" + to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds), minutes);
		hours -= mh;
		minutes = minutes + 60 * mh;
	}*/
}

const int Time::get_h() {
	return hours;
}
const int Time::get_m() {
	return minutes;
}
const int Time::get_s() {
	return seconds;
}
Time Time::getTypeTime() {
	return *this;
}
Time Time::sumTime(Time f) {
	seconds += f.get_s();
	minutes += f.get_m();
	hours += f.get_h();
	checkTime();
	return *this;
}
void Time::Display() {
	cout << to_string(Time::hours) + ":" + to_string(Time::minutes) + ":" + to_string(Time::seconds);
	/*return to_string(Time::hours) + ":" + to_string(Time::minutes) + ":" + to_string(Time::seconds);*/
}


