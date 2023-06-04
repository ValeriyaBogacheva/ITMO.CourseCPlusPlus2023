



#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    cout << "Кол-во монет=> ";
    int money,m1=0,m5=0,m10=0,m20=0,m50=0,m100=0;
    cin >> money;
    while (money > 0) {
        if (money >= 100) {
            m100 = money / 100;
            money -= m100 * 100;
        }
        else if (money >= 50) {
            m50 = money / 50;
            money -= m50 * 50;
        }
        else if (money >= 20) {
            m20 = money / 20;
            money -= m20 * 20;
        }
        else if (money >= 10) {
            m10 = money / 10;
            money -= m10 * 10;
        }
        else if (money >= 5) {
            m5 = money / 5;
            money -= m5 * 5;
        }
        else if (money >= 1) {
            m1 = money / 1;
            money -= m1 * 1;
        }
    }
    cout << "Монета 100р.: " << m100 << "\nМонета 50р.: " << m50 << "\nМонета 20р.: " << m20 << "\nМонета 10р.: " << m10 << "\nМонета 5р.: " << m5 << "\nМонета 1р.: "<<m1;
}

