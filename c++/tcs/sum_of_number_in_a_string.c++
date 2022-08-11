#include<bits/stdc++.h>
using namespace std ;
int fun(string s,int n){
    if(n==0 ) return 0 ;
    string temp = "" ;
    int sum =0 ;
    for(int i=0;i<n;i++)
    if(s[i]>='0'&&s[i]<='9')
    temp.push_back(s[i]) ;
    else{
        if(temp!="")
        sum+=stoi(temp) ;
        
        temp ="" ;
    }
    if(temp!="")
        sum+=stoi(temp) ;
    return sum ;
}
int main(){
    int n;
    cin>>n ;
    string s ;
    cin>>s ;
    cout<<fun(s,n) ;
}