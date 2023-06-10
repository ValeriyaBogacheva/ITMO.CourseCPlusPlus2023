#include <iostream>
#include <string>
#include "Distance.h"
using namespace std;

int main()
{
    system("chcp 1251");
    Distance dist2;
    Distance dist1 = 2.35F;
    dist2.getdist();
    float mtrs;
    mtrs = static_cast<float>(dist1);
    mtrs = dist2;
    cout <<"\n" << mtrs;
}

