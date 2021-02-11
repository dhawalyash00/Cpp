#include <iostream>

using namespace std;
template <class A, class B>
A large(A a, B b){
if(a>b){
    return a;
}else
return b;
}

int main()
{
    cout <<large(4,5.6)<< endl;
    cout<<large(4,8);
    return 0;
}
