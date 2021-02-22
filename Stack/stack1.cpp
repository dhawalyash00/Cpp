#include <iostream>

using namespace std;
#define n 100
class stack
{
    int* arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if(top == n-1)
        {
            cout<<"Stack is Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack is Underflow"<<endl;
            return;

        }
        top--;
    }
    void peek()
    {
        if(top == -1){
            cout<<"No item is the Stack"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }
    bool isEmpty()
    {
        return top == -1;

    }
};

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.peek();
    s1.pop();
    s1.peek();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
}

