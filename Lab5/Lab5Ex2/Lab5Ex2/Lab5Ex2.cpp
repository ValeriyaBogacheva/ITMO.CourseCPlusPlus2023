

#include <iostream>
using namespace std;

int* dynamicMas(int n) {
    int *mas = new int[n];
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
    int N = 0;
    cout << "Введите размер массива => " << endl;
    cin >> N;
    int *a = dynamicMas(N);
    
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями

    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for (int i=0;i < N;i++)
        cout << a[i] << '\t';
    delete[] a;
}
