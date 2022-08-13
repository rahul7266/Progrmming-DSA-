#include<bits/stdc++.h>
using namespace std ;
int countBit(int n){
    int c= 0 ;
    while(n){
        if(n&1)c++ ;
        n=n>>1 ;
    }
    return c ;
}
int fun(int p,int q,int n){
    if(n==0) return 2 ;
    return p*countBit(fun(p,q,n-1))+q ;
}
int main(){
    int p,q,n ;
    cin>>p>>q>>n ;
    cout<<countBit(fun(p,q,n)) ;
    return 0 ;
}