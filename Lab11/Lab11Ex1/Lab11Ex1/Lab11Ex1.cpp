﻿#include <iostream>
#include <string>
#include "Distance.h"
using namespace std;

int main()
{
    system("chcp 1251");
    Distance dist1, dist2, dist3,dist4;
    dist1.getdist();
    dist2.getdist();
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;
    cout << "\ndist1 = ";
    dist1.showdist();
    cout << "\ndist2 = ";
    dist2.showdist();
    cout << "\ndist3 = ";
    dist3.showdist();
    cout << "\ndist4 = ";
    dist4.showdist();
    cout << " operator '-'";
    dist3 = dist1 - dist2;
    dist4 = dist1 - dist2 - dist3;
    cout <<"\ndist1 = " << dist1;
    cout << "\ndist2 = " << dist2;
    cout << "\ndist3 = " << dist3;
    cout << "\ndist4 = " << dist4;
}

