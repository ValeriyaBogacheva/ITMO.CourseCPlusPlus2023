#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>
#include <codecvt>
#include <locale>    

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите стих =>";
    string text;
    getline(cin, text);
    ofstream out("text.txt");
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    out.imbue(std::locale(""));
    out << text;
    out.close();

}

