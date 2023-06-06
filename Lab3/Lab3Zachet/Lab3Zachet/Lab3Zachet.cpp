
#include <iostream>
#include <string>
using namespace std;

bool isNumber(char Symbol)
{
    if (Symbol >= '0' && Symbol <= '9')
        return true;
    return false;
}

string clearString(string str) {
    string clearNumber;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' || str[i] == '-') {
            continue;
        }
        else {
            clearNumber += str[i];
        }
    }
    return clearNumber;
}

bool checkSNILS(string snils, int uniq_int=0) {

    int sum = 0;
    for (int i = 0; i < snils.length(); i++) {
        if (isNumber(snils[i]) == false) {
            return false;
        }
        if (snils.length() - 2 != i) {
            if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
                return false;
            }
            else {
                string str(1, snils[i]);
                sum += stoi(str) * (snils.length() - i);
            }
        }
        else {
            string str(1, snils[i]);
            sum += stoi(str) * (snils.length() - i);
        }
    }

    if (sum < 100 && sum == uniq_int) {
        return true;
    }
    else if ((sum == 100 || sum == 101) && uniq_int == 00) {
        return true;
    }
    else if (sum > 101) {
        if (sum % 101 < 100 && sum % 101 == uniq_int) {
            return true;
        }
        else if (sum % 101 == 100 && 0 == uniq_int) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int main()
{
    system("chcp 1251");
    string main_snils, snils, uniq;

    cout << "Введите номер СНИЛС=> ";
    getline(cin, main_snils);
    main_snils = clearString(main_snils);

    snils = main_snils;
    snils = snils.erase(snils.size() - 2);

    uniq = main_snils[main_snils.size() - 2];
    uniq += main_snils[main_snils.size() - 1];

    int sum = 0, uniq_int = 0;
    uniq_int = stoi(uniq);



    if (checkSNILS(snils, uniq_int))
    {
        cout << "Верно!";
    }
    else {
        cout << "Ошибка номера!";
    }

}
