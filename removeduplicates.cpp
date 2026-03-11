#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i= 0;i <n;i++) {
        cin >> arr[i];
    }
    cout << "Unique elements are: ";
    for(int i=0;i<n;i++) {
        bool d=false;
        for(int j=0;j<i;j++) {
            if(arr[i]==arr[j]) {
                d=true;
                break;
            }
        }
        if(!d) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}