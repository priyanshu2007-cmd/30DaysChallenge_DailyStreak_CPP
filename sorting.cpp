#include <iostream>
#include <string>
using namespace std;
int main() {
    string words[] = {"banana", "apple", "mango", "cherry", "orange","motabhai","priyanshu","bored"};
    int size=8;
    cout<<"Before";
    for (int i=0;i<size;i++)
     {
        cout<<words[i];
        if (i != size - 1)
        cout << ", ";
    }
    for (int i=0;i<size-1;i++) 
    {
        for (int j=0;j<size-i-1;j++) 
        {
            if (words[j]>words[j+1]) 
            {
                string t=words[j];
                words[j]=words[j+1];
                words[j+1]=t;
            }
        }
    }
    cout << "After:";
    for (int i=0;i<size; i++) 
    {
        cout << words[i];
        if (i != size - 1) 
        cout << ", ";
    }
    return 0;
}