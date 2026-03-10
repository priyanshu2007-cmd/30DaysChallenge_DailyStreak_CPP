//secondlargest
#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >>n;
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l=arr[0];
    int s= arr[0];
    for(int i=1;i < n; i++) {
        if(arr[i]>l) {
            s=l;
            l=arr[i];
        }
        else if(arr[i] > s&& arr[i] != l) {
            s= arr[i];
        }
    }
    cout <<"Second largest element "<<s;
    return 0;
}