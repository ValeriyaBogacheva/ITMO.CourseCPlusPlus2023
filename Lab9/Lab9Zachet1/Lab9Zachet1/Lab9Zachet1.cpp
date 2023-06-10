

#include <iostream>
#include "triangle.h"
using namespace std;

int main()
{
    system("chcp 1251");
    cout << "Введите стороны треугольника => ";
    double a, b, c;
    cin >> a >> b >> c;
    try {
        triangle* Triangle = new triangle(a, b, c);
        cout << "Площадь: " << Triangle->getS();
    }
    catch (triangle::ErrorTriangle& ex) {
        cout << "\n Ошибка инициализации тругольника.Сторона длиной - " << ex.Value <<endl<< ". Сторона треугольника не может иметь такую длину.";
    }
}
