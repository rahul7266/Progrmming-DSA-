#include<bits/stdc++.h>
using namespace std ;
string fun(string s,int n){
    if(n==0) return s ;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
         s= s.substr(0,i)+s.substr(i+1) ;
       
    }
    return s ;
}
int main(){
     int n; 
     cin>>n ;
     string s ;
     cin>>s ;
     cout<<fun(s,n) ;
    return 0; 
}