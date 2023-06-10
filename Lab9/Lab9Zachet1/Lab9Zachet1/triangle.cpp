#include "triangle.h"
#include<cmath>

triangle::triangle(double a, double b, double c) {
	if (a + b < c)
		throw ErrorTriangle(c);
	else if( a + c < b)
		throw ErrorTriangle(b);
	else if (b + c < a)
		throw ErrorTriangle(a);
	triangle::a = a;
	triangle::b = b;
	triangle::c = c;
}
double triangle::getS() {
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;

}