
#include <iostream>

using namespace std;

int Rec10to2(int number) {
    if (number > 1)
        Rec10to2(number / 2);
    cout << number % 2;
    return number;
}

int main()
{
    int number;
    system("chcp 1251");
    cout << "Введите натуральное число => ";
    cin >> number;
    Rec10to2(number);
}
