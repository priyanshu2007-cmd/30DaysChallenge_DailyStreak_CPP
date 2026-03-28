#include <iostream>
#include <string>
using namespace std;
int main() {
    string w="priyanshu123";
    cout<<"Word:"<<w;
    bool hasL=false;
    bool hasD=false;
    for (int i=0;i<w.length();i++)
     {
        if(w[i]>='a'&& w[i]<='z'||w[i]>='A'&&w[i]<='Z')
        {
            hasL=true;
        } else if (w[i]>='0'&&w[i]<='9')
        {
            hasD=true;
        }
    }
    if (hasL&&hasD)
    {
        cout<<"contains both letters and digits";
    } else if (hasL)
    {
        cout<<"contains only letters";
    } else if (hasD)
    {
        cout<<"contains only digits";
    }
    return 0;
}