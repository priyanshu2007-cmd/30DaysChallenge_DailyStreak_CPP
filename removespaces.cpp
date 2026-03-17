#include<iostream>
#include<string>
using namespace std;
string f(string s){
    string r="";
    int i=0;
    while(i<s.length()){
        if(s[i]!=' '){
            r=r+s[i];
        }
        i++;
    }
    return r;
}
int main(){
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    string r=f(s);
    cout<<"Orignal string"<<s;
    cout<<"Without spaces"<<r;
    return 0;
}