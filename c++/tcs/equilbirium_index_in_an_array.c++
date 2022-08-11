#include<bits/stdc++.h>
using namespace std ;
int fun(int arr[],int n){
   
  int p[n] ;
  int s= 0 ;
  for(int i=0;i<n;i++){
    s+=arr[i] ;
    p[i] = s ;
  }

  for(int i=0 ; i<n;i++)
  if(p[i]-arr[i]==s-p[i])
  return i ;
  return -1 ;
}
int main(){
  int n ;cin>>n ;
  int arr[n] ;
  for(int i=0;i<n;i++) cin>>arr[i] ;
  cout<<fun(arr,n) ;
    return 0 ;
}