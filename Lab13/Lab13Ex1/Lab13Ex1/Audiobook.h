#pragma once
#include <iostream>
#include "Item.h"
class AudioBook : public Item
{
private:
	double time;
public:
	void getdata()
	{
		Item::getdata();
		cout << "������� ����� �������� : ";
		cin >> time;
	}
	void putdata()
	{
		Item::putdata();
		cout << "\n����� �������� : " << time;
	}
};
