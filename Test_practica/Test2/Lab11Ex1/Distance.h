#pragma once
#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (MTF*meters-feet); // остаток - это дюймы
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

	void getdist()
	{
		
		cout << "\n¬ведите число футов : ";
		cin >> feet;
		cout << "\n¬ведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\''\n";
	}
	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;
	Distance operator= (const Distance&) const ;
	float operator+ (const float) const;
	float operator- (const float) const;
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

};


