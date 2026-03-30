#include <iostream>
#include <string>
using namespace std;
int main() {
    string word[]={"hello", "my", "name", "is", "priyanshu","i","am","in","blr"};
    int size=9;
    string sent="";
    for (int i=0;i<size;i++)
     {
        sent+=word[i];
        if (i!= size-1)
         {
            sent+=" ";
        }
    }
    cout<<"Sentence:"<<sent;
    return 0;
}