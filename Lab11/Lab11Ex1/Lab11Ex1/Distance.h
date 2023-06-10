#pragma once
#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	// ����������� �� ���������
	Distance() : feet(0), inches(0.0) { }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		
		cout << "\n������� ����� ����� : ";
		cin >> feet;
		cout << "\n������� ����� ������ : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\''\n";
	}
	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);

};


