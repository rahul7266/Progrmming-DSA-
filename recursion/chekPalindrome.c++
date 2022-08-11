#include<bits/stdc++.h>
using namespace std;
bool chekPalindrome(string s){
    if(s.size()==0)
    return true;
    // if(s[0]==s[s.size()-1]&&chekPalindrome(s.substr(1,s.size()-2)))
    // return true;
    // return false;
    if(s[0]!=s[s.size()-1])
    return false;
    return chekPalindrome(s.substr(1,s.size()-2));
}
int main(){
    string s;
    cin>>s;
    cout<<chekPalindrome(s);
    return 0;
}