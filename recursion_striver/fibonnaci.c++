#include<bits/stdc++.h>
using namespace std ;
int fibonnaci(int n){
 if(n<=1) return n ;
  return fibonnaci(n-2)+fibonnaci(n-1) ;
}
int main(){
    int n ;
    cin>>n ;
    cout<<fibonnaci(n) ;
    return 0 ;
}