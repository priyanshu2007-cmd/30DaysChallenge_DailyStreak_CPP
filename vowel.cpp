#include <iostream>
#include <string>
using namespace std;
int main() {
    string w="my name is priyanshu";
    cout<<"before:"<<w;
    for (int i=0;i<w.length();i++)
     {
        if (w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u')
         {
            w[i]='*';
        }
    }
    cout<<"after:"<<w;
    return 0;
}