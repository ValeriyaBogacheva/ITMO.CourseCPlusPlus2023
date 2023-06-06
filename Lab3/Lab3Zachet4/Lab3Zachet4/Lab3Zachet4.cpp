
#include <iostream>
using namespace std;

int sum(int n) {
    int s=0;
    if (n == 1) return 5;
    else return(n * 5 + sum(n - 1));
}

int main()
{
    int n;
    system("chcp 1251");
    cout << "Введите n =>";
    cin >> n;
    cout<< "Сумма ряда = "<< sum(n);

}

