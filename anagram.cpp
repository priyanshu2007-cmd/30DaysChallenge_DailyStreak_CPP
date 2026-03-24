#include <iostream>
#include <string>
using namespace std;
int main() {
    string w1="l";
    string w2="s";
    cout <<"W1"<<w1;
    cout<<"W2"<<w2;
    if (w1.length()!= w2.length())
     {
        cout<<"Not anagrams";
        return 0;
    }
    int count[26] = {0};
    for (int i=0;i<w1.length();i++) 
    {
        count[w1[i]-'a']++;
        count[w2[i] - 'a']--;
    }
    bool isAnagram=true;
    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0) {
            isAnagram = false;
            break;
        }
    }
    if (isAnagram) 
    {
        cout <<"yes they are anagrams";
    } else 
    {
        cout <<"no they are not anagrams";
    }
    return 0;
}