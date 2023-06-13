
#include <iostream>
#include <windows.h>
#include <map>
#include <string>
using namespace std;
struct StudentGrade {
    StudentGrade(string name, char p) {
        this->Name = name;
        this->point = p;
    }
    string Name;
    char point;
};
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    map<int, StudentGrade> students;

    students.insert(make_pair(0, StudentGrade("Иван", 'A')));
    students.insert(make_pair(1, StudentGrade("Александр", 'C')));
    students.insert(make_pair(2, StudentGrade("Анастасия", 'A')));
    for (auto& item : students)
    {
        cout << item.first << " : " << item.second.Name << " - "<< item.second.point<< endl; //Вывод ключей и значений
    }

    map<string, char> _StudentGrade;
    _StudentGrade.insert(make_pair("Иван", 'A'));
    _StudentGrade.insert(make_pair("Александр", 'C'));
    _StudentGrade.insert(make_pair("Анастасия", 'A'));

    for (auto& item : _StudentGrade)
    {
        cout << item.first << " - " << item.second << endl; //Вывод ключей и значений
    }
}

