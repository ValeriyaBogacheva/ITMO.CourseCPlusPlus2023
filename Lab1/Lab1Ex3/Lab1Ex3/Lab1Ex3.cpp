

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    system("chcp 1251");
    cout << "Введите периметр=> ";
    double a,p;
    cin >> p;
    a = p / 3;
    cout.precision(3);
    p = p/2;
    double s = sqrt(p*(p-a)*(p-a)*(p-a));


    cout << "Сторона" << "\t" << "Площадь \n" << a  << "\t" << s;
}

