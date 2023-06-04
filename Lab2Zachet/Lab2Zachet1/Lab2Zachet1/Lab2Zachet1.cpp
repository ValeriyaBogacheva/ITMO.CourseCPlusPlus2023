
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1251");
    int n;
    cout << "Введите суперпростое число => ";
    cin >> n;
    bool prime=true;
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            prime = false;
        }
    }
    if (prime) {
        cout << n << " Суперпростое число";
    }
}
