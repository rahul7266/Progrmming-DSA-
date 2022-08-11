#include<bits/stdc++.h>
using namespace std ; 
void prime_factor(int n){
    for(int i=2 ;n>1 ;i++){
        if(n%i==0){
            while(n%i==0)
            {
                cout<<i<<" * ";
                n=n/i ;
            }
        }
    }
}
int main(){
    int n ;
    cin>>n; 
    prime_factor(n) ;
}