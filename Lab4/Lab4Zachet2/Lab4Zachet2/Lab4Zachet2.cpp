
#include <iostream>
#include <string>
using namespace std;

bool isDigital(char ch) {
    
    if (ch >= '0' && ch <= '9') {
        return true;
    }
    return false;
}
bool checkString(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (isDigital(str[i]) == false) {
            return false;
        }
    }
    return true;
}
bool Input(int& a, int& b) {
    string _a, _b;
    cout << "Введите a, b => ";
    cin >> _a >> _b;
    if (checkString(_a) == false || checkString(_b) == false) {
        return false;
    }
    a = stoi(_a);
    b = stoi(_b);
    return true;
}
int main()
{
    system("chcp 1251");
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << s;
    return 0;

}
