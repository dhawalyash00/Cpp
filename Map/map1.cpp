#include <iostream>
#include <map>
using namespace std;
int main(){

 map <int,string> customer;
 customer[100] = "Gajendra";
 customer[123] = "Raj";
 customer[133] = "Ravi";
 customer[155] = "Rabi";
 customer.insert(pair<int,string>(117,"Shrutvi"));

 map<int,string>::iterator p = customer.begin();
 while(p!=customer.end()){
    cout<<p->second<<endl;
    p++;
 }
 cout<<customer.at(100)<<endl;
 cout<<customer.size()<<endl;
 cout<<customer.empty();
}
