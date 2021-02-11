#include <iostream>

using namespace std;

int main()
{
    int num, fac = 1;

    cout<<"enter a number "<<endl;
    cin>>num;
    for(int i = 1;i<=num;++i){
        fac *= i;

    }



    cout<<"the factorial is: "<<fac;
}
