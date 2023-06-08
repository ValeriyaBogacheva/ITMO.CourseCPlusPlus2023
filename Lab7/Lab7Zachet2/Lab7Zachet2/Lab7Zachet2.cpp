#include <iostream>
#include <windows.h>
using namespace std;
struct quadr {
	double x1;
	double x2;
	bool status = false;
};

quadr Quadratic(int a,int b,int c) {
	double d;
	quadr q = quadr();
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
		q.status = false;
	}
	return q;
}
int main()
{
	system("chcp 1251");

	double a, b, c;
	cout << "Введите коэф-ты уравнения=> ";
	cin >> a >> b >> c;
	quadr q = Quadratic(a, b, c);
	if (!q.status) {
		cout << "Корни:"<<endl <<" x1 : " << q.x1 <<endl<< " x2 : " << q.x2 << endl;
	}
	else {
		cout << "Корней нет";
	}
}
