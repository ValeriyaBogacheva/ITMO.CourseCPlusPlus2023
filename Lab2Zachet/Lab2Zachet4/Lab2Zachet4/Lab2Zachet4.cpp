
#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>                                             

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    int X = rand() % 3 + 1;
    int Y = rand() % 3 + 1;
    int radius = 4;
    //cout << "X" << X << "Y" << Y << endl;

    int points = 0;
    int count = 0;
    while (points < 50) {
        cout << "Введите координаты выстрела=>" << endl;
        count++;
        double x, y;
        cin >> x >> y;
        double random = rand() % 2 + 1;

        if (random > 1.5) {
            cout << "Помеха!"<<endl;
            double random_value = rand() % 2 + 1;
            if (random_value > 1.5) {
                x += 1.25;
                y -= 1.25;
            }
            else {
                x -= 1.25;
                y += 1.25;
            }
        }
        double result = pow(x-X,2) + pow(y - Y,2);
        if (result < radius / 2) {
            points += 10;
            cout << "Вы заработали 10 очков" << endl;
        }
        else if (result < radius) {
            points += 5;
            cout << "Вы заработали 5 очков" << endl;

        }
        else {
            cout<< "Промах!";
        }
    }
    if (count <= 5) {
        cout << "Снайпер! Количество выстрелов: " << count;
    }
    else if (count <= 10) {
        cout << "Просто стрелок! Количество выстрелов: " << count;
    }
    else {
        cout << "Новичок! Количество выстрелов: " << count;
    }
}
