
#include <iostream>
#include <cassert>
using namespace std;
class Stack
{
private:
    int arr[10]; 
    int n; 

public:

    void reset()
    {
        n = 0;
        for (int i = 0; i < 10; ++i)
            arr[i] = 0;
    }

    void push(int value)
    {

        if (n == 10) {
            cout << "STACK заполнен";
            return;
        }
        arr[n++] = value;
        
    }

    int pop()
    {
        n -= 1;
        return arr[n];
    }

    void print()
    {
        cout << "( ";
        for (int i = 0; i < n; ++i)
            cout << arr[i] << ' ';
        cout << ")"<< endl;
    }
};

int main()
{
    system("chcp 1251");
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}