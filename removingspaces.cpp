#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string sent="hello my name is priyanshu";
    string nsp= "";
    cout<<"before:"<<sent;
    for (int i=0;i<sent.length();i++)
     {
        if (sent[i]!=' ')
         {
            nsp+=sent[i];
        }
    }
    cout<<"after:"<<nsp;
    return 0;
}