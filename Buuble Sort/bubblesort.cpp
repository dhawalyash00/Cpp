#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     cout<<"you entered the following arrray"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i];
    }
    for(int i=0;i<n - 1;i++){
        for(int j=0;j<n - 1 - i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
