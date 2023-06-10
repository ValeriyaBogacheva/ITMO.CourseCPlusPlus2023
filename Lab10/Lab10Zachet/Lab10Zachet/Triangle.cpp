#include "Triangle.h"
#include <math.h>


Triangle::Triangle(Dot _a, Dot _b, Dot _c) {
	a = _a;
	b = _b;
	c = _c;
}
Triangle::Triangle(double a1, double a2, double b1, double b2, double c1, double c2) {
	a = *new Dot(a1, a2);
	b = *new Dot(b1, b2);
	c = *new Dot(c1, c2);
}
double* Triangle::getDistance() {

	double a = Triangle::a.distanceTo(Triangle::b);
	double b = Triangle::b.distanceTo(Triangle::c);
	double c = Triangle::c.distanceTo(Triangle::a);
	double ar[3] = { a,b,c };
	return ar;
}
double Triangle::getP() {
	double *ar = { getDistance() };
	double p = ar[0] + ar[1] + ar[2];
	return p;
}
double Triangle::getS() {
	double p = getP()/2;
	double* ar = { getDistance() };
	double s = sqrt(p * (p - ar[0]) * (p - ar[1]) * (p - ar[2]));
	return s;
}