

#include <iostream>
#include <string>
using namespace std;

int* dynamicMas(int n) {
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    return mas;
}
int sum(int n, int* mas) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] >= 0)
            s += mas[i];
    }
    return s;
}
int negativeSum(int n, int* mas) {
    int negatives = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
            negatives += abs(mas[i]);
    }
    return negatives;
}
int evenSum(int n, int* mas) {
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            even += abs(mas[i]);
        }
    }
    return even;
}
int oddSum(int n, int* mas) {
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) {
            odd += abs(mas[i]);
        }
    }
    return odd;
}
int* sorting(int N, int* a) {
    int min = 0; 
    int buf = 0; 
    for (int i = 0; i < N; i++)
    {
        min = i; 
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    return a;
}
int main()
{
    system("chcp 1251");
    int n = 0;
    cout << "Введите размер массива => " << endl;
    cin >> n;
    int* mas = dynamicMas(n);
    int s = sum(n,mas);
    int negatives = negativeSum(n,mas);
    int even = evenSum(n,mas);
    int odd = oddSum(n,mas);
    cout << "Положительная сумма: " << s << endl;
    cout << "Отрицательная сумма: " << negatives << endl;
    cout << "Сумма четных индексов: " << even << endl;
    cout << "Сумма нечетных индексов: " << odd << endl;
    double avg = (even + odd) / n;
    cout << " Среднее значение: " << avg << endl;
    mas = sorting(n, mas);
    for (int i = 0; i < n; i++)
        cout << mas[i] << '\t';
    delete[] mas;
}
