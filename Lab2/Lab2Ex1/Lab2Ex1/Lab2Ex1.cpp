
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    cout << "Введите координаты x и y =>";
    double x, y;
    cin >> x >> y;
    if (x * x + y * y < 9 && y > 0)
        cout << "Внутри";
    else if (x * x + y * y > 9 || y < 0)
        cout << "Снаружи";
    else cout << "На границе";

}

