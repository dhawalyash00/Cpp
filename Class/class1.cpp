#include <iostream>
using namespace std;
class A{

 private:
     int a, b;
 public:
     void setData(int x, int y){a = x, b = y;}
     void showData(){
cout<<"A is"<<" "<<a<<" "<<"and B is"<<" "<<b<<endl;}

};
class B:public A
{
public:
    int sum(int c, int d){
    return c+d;
    }
    int showSum(){
    cout<<"the sum is"<<" "<<;}
};
int main(){
A obj1;
B obj2;
obj1.setData(3,5);
obj1.showData();
obj2.sum(4,1);
obj2.showSum();

}
