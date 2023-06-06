
#include <iostream>
using namespace std;

double getS(double a) {
    return sqrt(3) / 4 * a * a;
}
double getS(double a, double b, double c) {
    double p = (a + b + c)/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    system("chcp 1251");
    int typeTriangle;
    double a, b, c, s;
    cout << "Выберите тип треугольника, где 0 - равносторонний, 1 - разносторонний =>";
    cin >> typeTriangle;
    if (typeTriangle == 0) {
        cout << "Введите сторону =>";
        cin >> a;
        s = getS(a);
    }
    else if (typeTriangle == 1) {
        cout << "Введите стороны =>";
        cin >> a >> b >> c;
        s = getS(a, b, c);
    }
    cout << "Площадь треугольника = " << s;

}
