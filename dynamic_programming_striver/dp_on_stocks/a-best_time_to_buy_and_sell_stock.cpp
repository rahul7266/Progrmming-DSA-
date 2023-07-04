
// one time buy and one time and one time sell
#include<bits/stdc++.h>
using namespace std ;
int maxProfit(vector<int>v, int n){
    int mn = v[0] ; 
    int profit = 0 ;
    for(auto x: v){
        mn = min(mn,x) ;
        profit = max(profit,x-mn) ;
    }
    return profit ;
}

int main(){
    int n ;
    cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    cout<<maxProfit(v,n) ;
    return 0 ;
}