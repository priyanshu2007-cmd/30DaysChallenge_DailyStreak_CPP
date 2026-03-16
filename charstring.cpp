#include <iostream>
using namespace std;
int main() {
    string n;
    cout<<"enter a string";
    cin>>n;
    int f[256]={0};
    for (int i=0;i<n.length();i++) f[(int)n[i]]++;
    cout << "character freq" << endl;
    for (int i=0;i<256;i++) {
        if (f[i]>0) {
            cout<<(char)i<<f[i];
        }
    }
    return 0;
}