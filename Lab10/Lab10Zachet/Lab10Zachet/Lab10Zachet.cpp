#include <iostream>
#include <string>
#include "Dot.h"
#include "Triangle.h"
using namespace std;


int main()
{
    system("chcp 1251");
    Dot* a = new Dot();
    Dot* b = new Dot(5, 0);
    Dot* c = new Dot(3, 5);
    Triangle* triangle = new Triangle(*a,*b,*c);
    double* distance = triangle->getDistance();
    cout << "a: " << distance[0]<<" \t b: " << distance[1] << " \t c: " << distance[2] << endl;
    cout << "P: " << triangle->getP() << endl;
    cout << "S: " << triangle->getS() << endl;

    cout << endl << endl;
    Triangle* triangle1 = new Triangle(0,0,2,0,1,3);
    double* distance1 = triangle1->getDistance();
    cout << "a: " << distance1[0] << " \t b: " << distance1[1] << " \t c: " << distance1[2] << endl;
    cout << "P: " << triangle1->getP() << endl;
    cout << "S: " << triangle1->getS() << endl;
}

