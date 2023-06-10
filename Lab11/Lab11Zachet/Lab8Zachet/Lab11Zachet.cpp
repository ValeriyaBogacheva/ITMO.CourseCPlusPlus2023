

#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
    system("chcp 1251");
    try {
      
        /*Time* time1 = new Time(12, 35, 49);
        Time* time2 = new Time(0, -12, 59);
        Time* time3 = new Time();*/
        Time ttime1,ttime2,ttime3;
        ttime1.setTime();
        ttime2.setTime();
        ttime3 = ttime1 + ttime2;
        ttime3.Display();
        ttime3 = ttime1 - ttime2;
        ttime3.Display();
        

        int timeSec = 0;
        timeSec = ttime1 + 512;
        cout <<"t+i\t" << timeSec << endl;
        timeSec = 5556 + ttime1;
        cout << "i+t\t" << timeSec << endl;

        timeSec = ttime1 - 512;
        cout << "t-i\t" << timeSec << endl;
        timeSec = 5556 - ttime1;
        cout << "i-t\t" << timeSec << endl;

        bool b = ttime1 > ttime2;
        cout << b << "\t" << ttime1 << " > " << ttime2<<endl;

        b = ttime1 < ttime2;
        cout << b << "\t" << ttime1 << " < " << ttime2 << endl;

        b = ttime1 == ttime2;
        cout << b<<"\t" << ttime1 << " == " << ttime2 << endl;
    }
    catch (Time::ExTime& ex) {
        cout << "Ошибка: " << ex.text << " : " << ex.iValue << endl;
    }
    
   
}

