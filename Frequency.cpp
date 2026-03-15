#include <iostream>
using namespace std;
int main() {
    int f;
    cout<< "enter size of array: ";
    cin>>f;
    int a[f];
    cout<<"enter elements";
    for (int i=0;i<f;i++)cin >> a[i];
    int n;
    cout<< "enter the number to find";
    cin >>n;
    int count=0;
    for(int i=0;i<f; i++)if(a[i]==n) count++;
    cout<<n<<"appear"<<count<<"times";
    return 0;
}