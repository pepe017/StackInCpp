#include <iostream>
using namespace std;
class stack
{
private:
    int TOP = -1;
    int Size = 0;
    int *arr;

public:
    stack(int size)
    {
        Size = size;
        arr = new int[Size];
    }
    void push(int item)
    {
        if (TOP >= Size - 1)
            cout << "\033[1;31mOverFlowed\033[1;0m\n\n";
        else
            arr[++TOP] = item;
    }
    int pop()
    {
        if (TOP == -1)
        {
            cout << "\033[1;31mUnderFlowed\033[1;0m\n\n";
            return NULL;
        }
        else
            return arr[TOP--];
    }
    int top()
    {
        if (TOP == -1)
            cout << "\033[1;31mUnderFlowed\033[1;0m\n\n";
        else
            return arr[TOP];
    }
    void display()
    {
        int i;

        for (i = TOP; i != -1; i--)
            cout << arr[i] << endl;
    }
    bool isEmpty()
    {
        if (TOP == -1)
            return true;
        else
            return false;
    }
};
