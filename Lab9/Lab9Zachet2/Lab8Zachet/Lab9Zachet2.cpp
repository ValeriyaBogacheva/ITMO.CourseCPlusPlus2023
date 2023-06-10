

#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
    system("chcp 1251");
    try {
      
        Time* time1 = new Time(12, 35, 49);
        Time* time2 = new Time(0, -12, 59);
        Time* time3 = new Time();
        
        /*
        Time* time1 = new Time(12, 35, 49);
        Time* time2 = new Time(0, 12, 59);
        Time* time3 = new Time();
           */
        time1->Display();
        cout << endl;
        time2->Display();
        cout << endl;
        time3->Display();
        cout << endl;
        *time3 = time2->sumTime(*time1);
        time3->Display();
        delete time1;
        delete time2;
        delete time3;
    }
    catch (Time::ExTime& ex) {
        cout << "Ошибка: " << ex.text << " : " << ex.iValue << endl;
    }
    
   
}

