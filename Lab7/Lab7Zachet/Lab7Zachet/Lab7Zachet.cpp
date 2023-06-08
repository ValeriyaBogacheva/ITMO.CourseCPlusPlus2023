#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

struct Time {
	int hours;
	int minutes;
	int seconds;
	void Display() {
		cout << "Часы: " << hours << " Минуты: " << minutes << " Секунды: " << seconds<<endl;
	}
	void Display(int h,int m, int c) {
		cout << "Часы: " << h << " Минуты: " << m << " Секунды: " << c << endl;
	}
	void SecondsDisplay() {
		int allSeconds= hours*60*60 + minutes*60 + seconds;
		cout << "Всего секунд: " << allSeconds<<endl;
	}
	void plus(int h, int m, int s) {
		hours += h;
		minutes += m;
		seconds += s;
		if (seconds / 60 >= 1) {
			minutes += seconds / 60;
			seconds = seconds - 60 * (seconds / 60);
		}
		if (minutes / 60 >= 1) {
			hours += minutes / 60;
			minutes = minutes - 60*(minutes / 60);
		}
	}
	void minus(int h, int m, int s) {
		hours -= h;
		minutes -= m;
		seconds -= s;

		if (seconds < 0) {
			abs(seconds)/60;
			int mm = abs(seconds / 60) + 1;
			minutes -= mm;
			seconds = seconds + 60 * mm;
		}
		if (minutes < 0 ) {
			int mh = abs(minutes / 60) + 1;
			hours -= mh;
			minutes = minutes + 60 * mh;
		}
	}
};
int main()
{
	int x, y, z;
	system("chcp 1251");
	Time time = Time();
	cout << "Введите Часы, минуты, секунды => ";
	cin >> time.hours >> time.minutes >> time.seconds;
	time.Display();
	cout << "Интервал + =>";
	cin >> x >> y >> z;
	time.plus(x, y, z);
	time.Display();
	cout << "Интервал - =>";
	cin >> x >> y >> z;
	time.minus(x, y, z);
	time.Display();


}
