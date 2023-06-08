#include <iostream>
#include<array>
using namespace std;
int main()
{
    system("chcp 1251");
    string key = "";
    const int N = 6;
    string a[N] = { "Яблоко","Печенье","Самовар","Печь","Груша","Диван" };
    int history[N]={ 0,0,0,0,0,0 };
    while (true) {
        int n = size(a);
        cout << "Массив: ";
        for (string i : a) {
            cout << i << '\t';
        }
        cout <<endl <<"Введите элемент для поиска ( 0 - выход) => ";
        cin >> key;
        if (key == "0")
            break;

        
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (key == a[i]) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Элемент найден под индексом : " << index<<endl;
            history[index]++;
            int min = 0;
            int buf = 0; 
            string buffer = "";
            for (int i = 0; i < n; i++)
            {
                min = i;
                for (int j = i + 1; j < n; j++)
                    min = (history[j] > history[min]) ? j : min;
                if (i != min)
                {
                    buf = history[i];
                    history[i] = history[min];
                    history[min] = buf;

                    buffer = a[i];
                    a[i] = a[min];
                    a[min] = buffer;
                }
            }
        }
        else {
            cout << "Элемент не найден"<<endl;
        }

        cout << "Массив: "<<endl;
        for (string i : a) {
            cout << i << '\t';
        }
        cout << endl;
        for (int i : history) {
            cout << i << '\t';
        }
        cout << endl;
        cout << endl;
    }
}