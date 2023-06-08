

#include <iostream>
#include <string>
using namespace std;

int *dynamicMas(int n) {
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    return mas;
}
int main()
{
    system("chcp 1251");
    int n = 0;
    cout << "Введите размер массива => " << endl;
    cin >> n;
    int* mas = dynamicMas(n);
    int s = 0;
    int negatives = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if(mas[i] >= 0 )
            s += mas[i];
        else
            negatives += abs(mas[i]);

        if (i % 2 == 0) {
            even += abs(mas[i]);
        }
        else {
            odd += abs(mas[i]);
        }
    }
    cout << "Положительная сумма: " << s<<endl;
    cout << "Отрицательная сумма: " << negatives << endl;
    cout << "Сумма четных индексов: " << even << endl;
    cout << "Сумма нечетных индексов: " << odd << endl;



    double avg = (even+odd) / n;
    cout << " Среднее значение: " << avg;
    delete[] mas;
}
