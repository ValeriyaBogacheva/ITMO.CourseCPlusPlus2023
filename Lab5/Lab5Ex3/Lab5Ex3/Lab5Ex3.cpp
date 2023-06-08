
#include <iostream>
#include <string>
using namespace std;

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));
void show_array(const int Arr[], const int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a > b;
    
}

bool from_max(const int a, const int b)
{
    return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
        }
    }
}
int* dynamicMas(int n) {
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
    bool (*from_f[2])(int, int) = { from_min,from_max };
    int N = 0;
    cout << "Введите размер массива => " << endl;
    cin >> N;
    int* A = dynamicMas(N);

    int my_choose = 0;


    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> my_choose;
    cout << "Исходные данные: ";
    show_array(A, N);
    bubble_sort(A, N, (*from_f[my_choose - 1]));
    show_array(A, N);
    delete[] A;
}

