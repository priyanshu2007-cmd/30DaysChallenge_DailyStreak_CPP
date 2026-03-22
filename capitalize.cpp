#include <iostream>
#include <string>
using namespace std;
int main() {
    string s="hello my name is priyanshu and i am fed of coding";
    cout<<"Before"<<s;
    s[0]=toupper(s[0]);
    for (int i=1; i<s.length();i++)
     {
        if (s[i-1]==' ')
         {
            s[i]=toupper(s[i]);
        }
    }
    cout<<"After:"<<s;
    return 0;
}