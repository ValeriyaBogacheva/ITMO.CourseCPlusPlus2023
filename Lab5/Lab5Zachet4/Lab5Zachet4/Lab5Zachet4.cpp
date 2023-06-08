
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    system("chcp 1251");
    int i;

    if (strncmp(argv[1], "-a", 2) == 0) {
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        cout << "Сумма: "<<x+y<<endl;
    }else  if (strncmp(argv[1], "-m", 2) == 0) {
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        cout << "Произведение: " << x * y << endl;
    }

}
