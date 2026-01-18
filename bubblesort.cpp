#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 5, 2, 8, 1, 4};
    int n = 6;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n / 2; i++) {
        sum += arr[i] * arr[n - 1 - i];
    }
    cout << sum;
    return 0;
}
