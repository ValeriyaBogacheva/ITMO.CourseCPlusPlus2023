
#include <iostream>
using namespace std;

template<class T>
T avarage(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    system("chcp 1251");
    int m1[5] = { 5,4,7,4,2 };
    cout << avarage(m1, 5)<<endl;
    long m2[5] = { 554123,41412,7345,412314,23532 };
    cout << avarage(m2, 5) << endl;
    double m3[5] = { 5.4123,4.412435,7.12456,4.123,2.1233 };
    cout << avarage(m3, 5) << endl;
    char m4[5] = { '5','4','7','4','2' };
    cout << avarage(m4, 5) << endl;

}

