#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    bool issort=true;
    cout<<"Ener number of elements: ";
    cin>>n;
    cout<< "Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            issort=false;
            break;
        }
    }
    if(issort)
        cout<<"Array is sorted in ascending order";
    else
        cout<<"Array is not in sorted in ascending order";
    return 0;
}