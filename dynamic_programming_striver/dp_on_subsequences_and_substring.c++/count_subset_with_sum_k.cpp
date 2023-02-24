#include<bits/stdc++.h>
using namespace std ;

//memoization
int count_subset(vector<int>&v,int n,int k,vector<vector<int>>dp){
    if(k==0) return 1 ;
    if(n==0) return v[n]==k ;   // if(n<0) return 0 ; you can also this statement
   
     if(dp[n][k]!=-1) return dp[n][k] ;
    int nottake = count_subset(v,n-1,k,dp) ;
    int take = 0 ;
    if(v[n]<=k)
    take = count_subset(v,n-1,k-v[n],dp) ;

    return dp[n][k] = take+nottake ; 
}

//tabulation 

int count_subset2(vector<int>&v, int n, int k){
    vector<vector<int>>dp(n+1,vector<int>(k+1,0)) ;
    for(int i=0;i<n;i++) dp[i][0] = 1 ;
    if(v[0]<=k) dp[0][v[0]] = 1 ;

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            int nottake = dp[i-1][j] ;
            int take =0 ;
            if(v[i]<=j)
            take = dp[i-1][j-v[i]] ;
            dp[i][j] = take + nottake ;
        }
    } 
    return dp[n-1][k] ;
}

//space optimization

int count_subset3(vector<int>&v, int n, int k){
    vector<int>dp(k+1,0) ,cur(k+1,0);
    dp[0] = cur[0] = 1 ;
     
    if(v[0]<=k) dp[v[0]] = 1 ;

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            int nottake = dp[j] ;
            int take =0 ;
            if(v[i]<=j)
            take = dp[j-v[i]] ;
            cur[j] = take + nottake ;
        }
        dp = cur ;
    } 
    return dp[k] ;
}

// more optimized way

int count_subset4(vector<int>&v, int n, int k){
    vector<int>dp(k+1) ;
    dp[0] = 1 ;

    for(auto x:v){
        for(int cur = k-x;cur>=0;cur--){
            dp[cur+x] = dp[cur+x] + dp[cur] ;
        }
    }
    return dp[k] ;
}

int main(){
    int n,k ;
    cin>>n>>k ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    vector<vector<int>>dp(n+1,vector<int>(k+1,-1)) ;

    cout<<count_subset(v,n-1,k,dp)<<endl ;
}

