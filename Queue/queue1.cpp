#include <iostream>

using namespace std;
#define n 20
class queue
{
    int* arr;
    int front;
    int back;
public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if(back == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }

    void pop()
    {
        if(front == -1 || front > back)
        {
            cout<<"No element in the queue!"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > back)
        {
            cout<<"No element in the queue!"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    //q1.pop();
    cout<<q1.empty();
}
