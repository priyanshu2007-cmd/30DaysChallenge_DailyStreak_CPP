#include <iostream>
#include <map>
using namespace std;
bool isSorted(map<int,int>a,int s) {
    for (int i=0;i<s-1;i++) 
    {
        if (a[i]>a[i + 1]) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    map<int,int>sa;
    sa[0] =1;sa[1]=3;sa[2]=5;sa[3]=7;sa[4]=9;sa[5]=12;
    map<int, int> usa;
    usa[0]=1;usa[1]=3;usa[2]=2;usa[3]=7;usa[4]=5;usa[5]=12;
    int s = 6;
    cout<<"array 1";
    for (int i=0;i<s;i++)
     {
        cout<<sa[i]<<" ";
    }
    if (isSorted(sa,s))
     {
        cout <<"this array is sorted in asc order";
    } else 
    {
        cout << "this array is not sorted in asc order";
    }
    cout<<"array 2";
    for (int i=0;i<s;i++) {
        cout<<usa[i]<<" ";
    }
    if (isSorted(usa, s)) {
        cout<<"this array is sorted in ascending order";
    } else 
    {
        cout <<"this array is not sorted in ascending order";
    }
    return 0;
}