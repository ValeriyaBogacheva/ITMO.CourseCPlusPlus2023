#pragma once
#include "Dot.h"
class Triangle
{
public:
	Triangle(Dot a , Dot b , Dot c);
	Triangle(double, double, double, double, double, double);
	double* getDistance();
	double getP();
	double getS();

private:
	Dot a;
	Dot b;
	Dot c;
};

