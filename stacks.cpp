#include<iostream>
using namespace std;
class Stack
{
    int *arr;
    int max;
    int top=-1;
    public:
    Stack(int length)
    {
        max=length;
        arr=new int(length);
    }
    void push(int data)
    {
        if (IsFull())
        {
            cout << "Overflow Condition"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    bool IsFull()
    {
        return top == max-1;
    }
    bool IsEmpty()
    {
        return top==-1;
    }
    int pop()
    {
        if(IsEmpty())
        {
            cout << "Underflow Condition"<<endl;
            return -1;
        }
        int x= arr[top];
        top--;
        return x;
    }
    int peek()
    {
        if(IsEmpty())
        {
            cout << "Underflow Condition"<<endl;
            return -1;
        }
        return arr[top];
    }
    void print()
    {
        if(IsEmpty())
        {
            cout << "Stack is Empty"<<endl;
            return;
        }
        for (int i=top;i>=0;i--)
        {
            cout << arr[i]<<endl;
        }
    }
};
int main()
{
    Stack stack(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    stack.push(0);
    cout <<stack.peek()<<endl;
    stack.push(4);
    stack.print();
    cout << stack.pop()<<endl;
    cout << stack.pop()<<endl;
    cout << stack.pop()<<endl;
    cout << stack.pop()<<endl;
    cout << stack.pop()<<endl;
    cout << stack.pop()<<endl;
}