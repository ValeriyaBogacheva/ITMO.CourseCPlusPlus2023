#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Item
{
private:
	string title;
	double price;
public:
	virtual void getdata()
	{
		cout << "\n������� ��������� : ";
		cin >> title;
		cout << "������� ���� : ";
		cin >> price;
	}
	virtual void putdata()
	{
		cout << "\n���������: " << title;
		cout << "\n����:" << price;
	}
};

