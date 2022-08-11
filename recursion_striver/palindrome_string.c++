#include<bits/stdc++.h>
using namespace std ;
bool palindrome(string s){
   if(s.size()==1||s.size()==0) return 1 ;
   if(s[0]!=s[s.size()-1]) return 0 ;
   return palindrome(s.substr(1,s.size()-2)) ;
}
int main(){
    string s ;
    cin>>s ;
    cout<<palindrome(s);
    return 0 ;
}