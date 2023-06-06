

#include <iostream>
using namespace std;
int Myroot(double, double, double, double&, double&);

int Myroot(double a, double b, double c, double& x1, double& x2) {
	double d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		return 1;
	}
	else if (d == 0) {
		x1 = (-b / (2 * a));
		return 0;
	}
	else {
		return -1;
	}
}
int main()
{
	system("chcp 1251");

	double a, b, c, x1, x2;
	cout << "Введите a, b, c=> ";
	cin >> a >> b >> c;
	int status = Myroot(a, b, c, x1, x2);
	switch (status)
	{
	case -1:
		cout << "Корней нет";
		break;
	case 0:
		cout << "Корни уравнения x1 = x2 = " << x1;
		break;
	case 1:
		cout << "Корни уравнения x1 = " << x1 << " ,x2 = " << x2;
		break;
	default:
		cout << "Корней нет";
		break;
	}
}

