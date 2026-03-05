#include <iostream>
using namespace std;
int main() {
    char str[100];
    int i = 0, len= 0;
    bool p = true;
    cout << "Enter a string: ";
    cin >> str;
    while(str[len] != '\0') {
        len++;
    }
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            p= false;
            break;
        }
    }
    if(p)
        cout <<"The string is a palindrome";
    else
        cout <<"The string is not a palindrome";
    return 0;
}