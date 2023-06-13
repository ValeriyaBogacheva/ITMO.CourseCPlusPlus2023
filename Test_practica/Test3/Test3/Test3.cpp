
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point operator= (const Point& p) {
		if (this == &p)
			return *this;
		x = p.x;
		y = p.y;
		return *this;
	}
	Point operator+(const Point& p) const {
		int xx = this->x + p.x;
		int yy = this->y + p.y;
		return Point(xx, yy);
	}
	void operator+=(const Point& p) {
		this->x += p.x;
		this->y += p.y;
	}
	Point operator+(const int pI) const {
		int xx = this->x + pI;
		int yy = this->y + pI;
		return Point(xx, yy);
	}
	string Display() {
		return to_string(x) + ":" + to_string(y)+"\t";
	}
};

int main()
{
	system("chcp 1251");
	Point pt1(1, 1), pt2(2, 2), pt3;
	pt3 = pt1 + pt2;
	pt2 += pt1;
	pt3 = pt1 + 5;
	cout << pt1.Display() << pt2.Display() << pt3.Display() << endl;
}

