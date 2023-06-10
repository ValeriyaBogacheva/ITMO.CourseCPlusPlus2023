#pragma once

#include <ostream>
class Point
{

public:
	Point(double, double);
	double getCenter() const;
	bool operator< (const Point&) const;
	friend std::ostream& operator<< (std::ostream& out, const Point& p);
	double getX() const;
	double getY() const;
private:
	double x, y;
};

