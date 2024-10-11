#include <iostream>
#include <string>
using namespace std;

class stack
{
private:
    int max;
    int top;
    char *arr;

public:
    stack(int length)
    {
        max = length;
        arr = new char[max];
        top = -1;
    }

    void push(char x)
    {
        if (top < max - 1)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Overflow condition" << endl;
        }
    }

    char pop()
    {
        if (top >= 0)
        {
            char x = arr[top];
            top--;
            return x;
        }
        else
        {
            cout << "Underflow condition" << endl;
            return '\0'; // Return null character if underflow occurs
        }
    }

    int length()
    {
        return max;
    }

    void clear()
    {
        delete[] arr; // Correctly delete the array
        arr = new char[max];
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == max - 1;
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }

    ~stack()
    {
        delete[] arr;
    }
};

int main()
{
    string y = "data structure";
    stack x(y.length());

    for (int i = 0; i < y.length(); i++)
    {
        x.push(y[i]);
    }

    x.print();

    while (!x.isEmpty())
    {
        cout << x.pop() << endl;
    }

}