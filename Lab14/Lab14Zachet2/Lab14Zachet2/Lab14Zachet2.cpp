#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
void Print(const T& data, const string& del) {
    for (auto iter = begin(data); iter != end(data); ++iter) {
        cout << *iter;
        if (next(iter) == end(data)) {
            cout << endl;
            return;
        }
        cout << del;
    }
    
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    vector<int> data = { 1, 2, 3,4,5,6,7,8,9,10,15 };
    Print(data, ", ");
}

