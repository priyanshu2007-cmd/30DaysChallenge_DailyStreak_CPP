#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    int totalSum = 0;
    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    cout << totalSum - arraySum;
    return 0;
}