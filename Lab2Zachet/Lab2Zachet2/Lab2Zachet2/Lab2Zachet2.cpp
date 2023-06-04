
#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("chcp 1251");
    string main_snils, snils, uniq;

    cout << "Введите номер СНИЛС=> ";
    cin >> main_snils;

    snils = main_snils;
    snils = snils.erase(snils.size() - 2);

    uniq = main_snils[main_snils.size() - 2];
    uniq += main_snils[main_snils.size() - 1];

    int sum = 0, uniq_int = 0;
    uniq_int = stoi(uniq);



    for (int i = 0; i < snils.length(); i++) {
        if (snils.length() - 2 != i) {
            if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
                cout << "Неверный номер";
                return 0;
            }
            else {
                string str(1, snils[i]);
                //cout << str <<"\t" << stoi(str) * (snils.length() - i) << endl;
                sum += stoi(str) * (snils.length() - i);
            }
        }
        else {
            string str(1, snils[i]);
            //cout << str << "\t" << stoi(str) * (snils.length() - i) << endl;
            sum += stoi(str) * (snils.length() - i);
        }
    }

    if (sum < 100 && sum == uniq_int) {
        cout << "True";
    }
    else if ((sum == 100 || sum == 101) && uniq_int == 00) {
        cout << "True";
    }
    else if (sum > 101) {
        if (sum % 101 < 100 && sum % 101== uniq_int) {
            cout << "True";
        }
        else if (sum % 101 == 100 && 0 == uniq_int) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    else {
        cout << "False";
    }

}
