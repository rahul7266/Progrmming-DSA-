#include<bits/stdc++.h>
using namespace std ;
int fibonnaci(int n){
 if(n<=1) return n ;
  return fibonnaci(n-2)+fibonnaci(n-1) ;
}
int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n ;
    cin>>n ;
    cout<<fibonnaci(n) ;
    return 0 ;
}