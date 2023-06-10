﻿#include <iostream>
#include <string>
using namespace std;

class DivideByZeroError
{
public:
    DivideByZeroError() : message("Деление на нуль") { }
    void printMessage() const { cout << message << endl; }
private:
    string message;
};
float quotient(int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)numl / num2;
}

int main()
{
    system("chcp 1251");
    cout << "Введите числитель:\n";
    int number1,number2;
    cin >> number1>> number2;


        try
        {
            float result = quotient(number1, number2);
            cout << "Частное равно " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ОШИБКА: ";
            error.printMessage();
        }


    return 0;

}

