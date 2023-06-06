
#include <iostream>
using namespace std;
int addNumders(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumders(n - 1));
}


int addNumders(int a,int n)
{
    if (a == n) return n; // выход из рекурсии
    else return (a + addNumders(a + 1,n));
}
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}
int main()
{
    int a,n;
    cout << "Input a, n => ";
    cin >> a >> n;
    cout << "addNmbers => " << addNumders(a, n)<<endl;
    cout << "gcd => " << gcd(a, n);
}

