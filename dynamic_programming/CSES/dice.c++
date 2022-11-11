#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n==0) return 1 ;
    int ans=0;
     for(int i=1;i<=6;i++){
        if(n-i>=0)
        ans+=fun(n-i);
     } 
     return ans ;
}

int main(){
int n ;
cin>>n ;
cout<<fun(n) ;
    return 0 ;
}