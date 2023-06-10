#include <iostream>
#include <string>
#include "Distance.h"
using namespace std;

int main()
{
    system("chcp 1251");
    Distance dist1 = 2.35F;
    dist1.showdist();
    float mtrs = static_cast<float>(dist1);

    float d = 2.6 + dist1;
    cout << mtrs<<"\t" << d<<endl;

    float d2 = dist1 + (float)5.78;
    cout << mtrs << "\t" << d2 << endl;

    float d3 = 10.52 - dist1;
    cout << mtrs << "\t" << d3 << endl;

    float d4 = dist1 - (float)2.1;
    cout << mtrs << "\t" << d4;

}

