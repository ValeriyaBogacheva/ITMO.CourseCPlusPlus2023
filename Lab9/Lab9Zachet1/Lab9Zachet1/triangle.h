#pragma once
#include <string>
class triangle
{

public:
	triangle(double, double, double);
	double getS();
	class ErrorTriangle {
	public:
		double Value;
		ErrorTriangle(double v) {
			Value = v;
		}
	};
private:
	double a,b,c;
};

