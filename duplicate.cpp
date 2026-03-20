#include<iostream>
using namespace std;
int main(){
    int a[100], n,i,g,h;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(g=i+1;g<n;g++)
        {
            if(a[i]==a[g])
            {
                for(h=g;h<n-1;h++)
                {
                    a[h]=a[h+1];
                }
                n--;
                h--;
            }
        }
    }
    cout<<"Unique elements";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}