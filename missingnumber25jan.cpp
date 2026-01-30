#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    int totalSum = 0;
    for (int i = 0; i < n-1; i++) {
        totalSum = totalSum+arr[i];
        cout<<totalSum<<"\n";
    }
    
    cout<<"="<<totalSum;
    return 0;
}