
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    char op;
    cout << "Сделай свой выбор, собери авто свой мечты: ";
    cin >> op;
    switch (op)
    {
    case 'S':
        cout << "Радио играть должно\n";

        break;
    case 'V':
        cout << "Радио играть должно\n";
        ;
        break;
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }

}

