#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    string s ;
    while(n){
        s+=to_string(n%2) ;
        n/=2 ;
    }
    int res = 0 ;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            res+=pow(2,i) ;
        }
    }
    cout<<res<<endl ;
}