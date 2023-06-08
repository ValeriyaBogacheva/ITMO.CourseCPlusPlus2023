#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

struct quadr {
	double x1;
	double x2;
};

using Tuple = tuple<quadr, bool>;

Tuple Quadratic(int a, int b, int c) {
	double d;
	quadr q = quadr();
	bool status = false;
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		q.x1 = ((-b) + sqrt(d)) / (2 * a);
		q.x2 = ((-b) - sqrt(d)) / (2 * a);
	}
	else if (d == 0)
	{
		q.x1 = -(b / (2 * a));
	}
	else {
		status = true;
	}
	auto t0 = make_tuple(q,status);
	return t0;
}

int main()
{
	system("chcp 1251");
	double a, b, c;
	cout << "Введите коэф-ты уравнения=> ";
	cin >> a >> b >> c;
	auto q = Quadratic(a, b, c);
	if (!get<1>(q)) {
		cout << "Корни:" << endl << " x1 : " << get<0>(q).x1 << endl << " x2 : " << get<0>(q).x2 << endl;
	}
	else {
		cout << "Корней нет";
	}
}