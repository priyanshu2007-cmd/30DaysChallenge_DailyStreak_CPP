#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest;
    return 0;
}