#include<iostream>
using namespace std;
int main(){
    int n1,n2,quo,rem;
    cout<<"enter 1st number";
    cin>>n1;
    cout<<"enter 2nd number";
    cin>>n2;
    quo=n1/n2;
    rem=n1%n2;
    cout<<"the quotent is" << quo<<endl;
    cout<<"the remainder is"<< rem<<endl;
    return 0;
    }