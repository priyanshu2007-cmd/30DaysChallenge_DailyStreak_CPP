#include <iostream>
#include <string>
using namespace std;
int main() {
    string w="boring";
    cout <<"word"<<w;
    int count[26]={0};
    for (int i=0;i<w.length();i++)
     {
        count[w[i]-'a']++;
    }
    int maxcount=0;
    char maxchar=' ';
    for (int i=0;i<26;i++) {
        if (count[i]>maxcount) {
            maxcount=count[i];
            maxchar='a'+i;
        }
    }
    cout<<"most frequent char"<<maxchar;
    cout<<"It appears"<<maxcount<<"";
    return 0;
}