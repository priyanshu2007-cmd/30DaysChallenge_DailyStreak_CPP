#include<iostream>
#include<string>
using namespace std;
string f(string s){
    int i=0;
    if(s[0]>='a'&&s[0]<='z'){
        s[0]=s[0]-32;
    }
    while(i<s.length()){
        if(s[i]== ' '&&i+1< s.length()){
            if(s[i+1]>='a'&&s[i+1]<='z'){
                s[i+1]=s[i+1]-32;
            }
        }
        i++;
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    string r=f(s);
    cout <<"Orignal string"<<s;
    cout << "Capitalized "<<r;
    return 0;
}