#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout<<"enter size of first ar";
    cin>>n;
    cout<<"enter size second ar";
    cin>>m;
    int a[n],b[m];
    cout<<"enter elements of first arr ";
    for (int i=0;i<n;i++)
    cin>>a[i];
    cout <<"enter elements of second array: ";
    for (int i=0;i<m;i++) 
    cin>>b[i];
    int merged[n+m];
    for (int i=0;i<n;i++)merged[i]=a[i];
    for (int i=0; i<m;i++) merged[n+i]=b[i];
    for (int i=0;i<n+m; i++)cout<<merged[i];
    return 0;
}