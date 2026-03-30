#include <iostream>
#include <string>
using namespace std;
int main() {
    string w[]={"aple","banana","orangeeeeeee","grappppppeeee","aammmmmmmmmm","motabhai"};
    int size = 6;
    cout<<"all words:";
    for (int i=0;i<size;i++) 
    {
        cout<<w[i];
        if (i !=size-1)cout<<",";
    }
    cout<<"words starting with vowel:";
    for (int i=0;i<size;i++) 
    {
        char f=w[i][0];
        if (f=='a'||f=='e'||f=='i'||f=='o'||f=='u') 
        {
            cout<<w[i];
        }
    }
    return 0;
}