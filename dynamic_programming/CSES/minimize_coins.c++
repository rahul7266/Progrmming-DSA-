#include<bits/stdc++.h>
using namespace std ;
int fun(vector<int>v,int n,int c){
    if(n==0 && c!=0) return 0 ;
    if(n==0||c==0 ) return 1 ;
    if(v[n-1]<=c)
    return min(fun(v,n,c-v[n-1]),fun(v,n-1,c)) ;
    
    return fun(v,n-1,c) ;
}
int main(){
    int n,c ;
    cin>>n>>c ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    cout<<fun(v,n,c)<<endl ;
    return 0 ;
}