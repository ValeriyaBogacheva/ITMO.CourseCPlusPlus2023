
#include <iostream>
#include <cmath>
using namespace std;


double getPow(int a) {
    return pow(a, 1.0 / 3.0);
}
double getPowIter(int a) {
    double yi = a,prev;
    do {
        prev = yi;
        yi=1./3. * (a / (yi * yi) + (2. * yi));
    } while (fabs(yi-prev)>.01);
    return yi;
}
int main()
{
    system("chcp 1251");

    int a;
    cout << "Введите число =>";
    cin >> a;
    cout << "Обычная =>" << getPow(a)<<endl;
    cout << "Итерационная=>" << getPowIter(a);
}

