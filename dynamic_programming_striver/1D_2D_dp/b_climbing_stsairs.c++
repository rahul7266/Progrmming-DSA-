#include<bits/stdc++.h>

using namespace std ;
int fib(int n){
   if(n<3) return n ;
   return fib(n-1)+fib(n-2) ;
}


int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n ;
    cin>>n ;
    cout<<fib(n) ;
   
    return 0 ;
}