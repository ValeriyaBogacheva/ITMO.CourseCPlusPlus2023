#pragma once
#include <iostream>
#include "Item.h"
class Paperbook : public Item
{
private:
	int pages;
public:
	void getdata()
	{
		Item::getdata();
		cout << "������� ����� ������� : ";
		cin >> pages;
	}
	void putdata()
	{
		Item::putdata();
		cout << "\n�������:" << pages;
	}
};
