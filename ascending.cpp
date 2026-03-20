#include <iostream>
using namespace std;
int main() {
    int sa[]={1, 3, 5, 7, 9, 12};
    int usa[]={1, 3, 2, 7, 5, 12};
    int s=6;
    cout<<"Array 1";
    for (int i=0;i<s;i++)
     {
        cout<<sa[i]<<" ";
    }
    bool isSort=true;
    for (int i=0;i<s-1;i++)
     {
        if (sa[i]>sa[i + 1])
         {
            isSort=false;
            break;
        }
    }
    if (isSort)
    {
        cout<<"this array is sorted in asc gorder";
    } else 
    {
        cout<<"No this array is not sorted in asc order";
    }
    cout<<"Array 2";
    for (int  i=0;i<s; i++)
     {
        cout<<usa[i]<<" ";
     }
    isSort=true;
    for (int i=0;i<s-1;i++) 
    {
        if (usa[i]>usa[i + 1]) 
        {
            isSort=false;
            break;
        }
    }
    if (isSort)
    {
        cout<<"this array is sorted in asc order";
    } else 
    {
        cout <<"this array is not sorted in asc order";
    }

    return 0;
}