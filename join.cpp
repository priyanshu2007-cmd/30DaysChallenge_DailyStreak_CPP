#include <iostream>
#include <string>
using namespace std;
int main() {
    string w[]={"hello", "my", "name", "is", "pri"};
    int size=5;
    string sen="";
    for (int i=0;i<size;i++)
     {
        sen+=w[i];
        if (i!= size-1)
         {
            sen+=" ";
        }
    }
    cout<<"Sentence:"<<sen;
    return 0;
}