#include<bits/stdc++.h>
using namespace std ;
bool fun(int n,int k,vector<int>v){
    unordered_map<int,int>mp ;
    for(auto x:v)
    mp[x]++ ;
    // int one=0,two =0 ;
    for(auto x:mp){
        if(x.second>2) return 0 ;
    }
    if(mp.size()>2*k) return 0 ;
    return 1 ;
}
int main(){
    int t ;
    cin>>t ;
    for(int i=1;i<=t ; i++){
        int n,k ;
        cin>>n>>k ;
        vector<int>v(n) ;
        for(int i=0;i<n;i++) cin>>v[i] ;
        if(fun(n,k,v))
        cout<<"Case #"<<i<<": "<<"YES"<<endl ;
        else
        cout<<"Case #"<<i<<": "<<"NO"<<endl ;
    }
    return 0 ;
}