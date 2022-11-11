#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    vector<long long>dp(n+1,0) ;
    dp[0]=1 ;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=6;j++)
        if(i-j>=0)
        dp[i]+=(dp[i-j]%1000000007) ;
    }
    cout<<dp[n]%1000000007<<endl ;
    return 0 ;
}