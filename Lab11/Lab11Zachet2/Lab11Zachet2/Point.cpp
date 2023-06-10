#include "Point.h"
#include <math.h>  
#include <ostream>
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
double Point::getCenter()const {
	double s = sqrt(pow(x, 2) + pow(y, 2));
	return s;
}
bool Point::operator< (const Point& p) const {
	if (getCenter() < p.getCenter()) {
		return true;
	}
	return false;
}
std::ostream& operator<< (std::ostream& out, const Point& p)
{
	out << "x: " << p.getX() << " \t y: "<< p.getY();
	return out;
}

double Point::getX() const{
	return x;
}
double Point::getY() const {
	return y;
}