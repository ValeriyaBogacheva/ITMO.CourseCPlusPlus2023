


#include <iostream>
using namespace std;
class A {
private:
    int n;
    int* _a;
public:
    A() {
        n = 0;
        _a = {};
    }
    A(int s) {
        n = s;
        _a = new int[s];
        for (int i = 0; i < s; i++) {
            _a[i] = 0;
        }
    }
    A(const A& _arr) {
        n = _arr.n;
        _a = new int[n];
        for (int i = 0; i < n; i++)
            _a[i] = _arr._a[i];
    }
    int size()const {
        return n;
    }
    ~A() {
        if (n > 0)
            delete[] _a;
    }
    A& operator=(const A& ar) {
        if (n > 0)
            delete[] _a;
        n = ar.n;
        _a = new int[n];
        for (int i = 0; i < n; i++)
            _a[i] = ar._a[i];
        return *this;
    }
    const int& operator[] (const int& index)const {
        return _a[index];
    }
};


int main()
{
    system("chcp 1251");

    A a1;
    A a2(10); //10 – размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }
    return 0;
}

