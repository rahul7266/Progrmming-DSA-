#include<bits/stdc++.h>
using namespace std ;

//memoization
int max_profit(vector<int>&v,vector<int>&price,int n,int weight,vector<vector<int>>dp){
   if( weight==0) return 0 ;
   if(n==0){
    if(v[0]<=weight) return price[0] ;
    else
    return 0 ;
   }
    
    if(dp[n][weight]!=-1) return dp[n][weight] ;
    
      int nottake = max_profit(v,price,n-1,weight,dp) ;
      int take = 0 ;
      if(v[n]<=weight)
      take = price[n] + max_profit(v,price,n-1,weight - v[n],dp) ;

    return dp[n][weight] = max(take,nottake) ;
}

//tabulation 

int max_profit2(vector<int>&v,vector<int>&price,int n,int weight){
    vector<vector<int>>dp(n+1,vector<int>(weight+1,0)) ;
    for(int i=0;i<n;i++) dp[i][0] = 0 ;
    for(int i=0;i<weight;i++) dp[0][i] = 0 ;
    

    for(int i=1;i<n;i++){
        for(int j=1;j<=weight;j++){
            int nottake = dp[i-1][j] ;
            int take =0 ;
            if(v[i]<=j)
            take = price[i]+dp[i-1][j-v[i]] ;

            dp[i][j] = max(take , nottake) ;
        }
    } 
    return dp[n-1][weight] ;
}

//space optimization

int max_profit3(vector<int>&v,vector<int>&price,int n,int weight){

    vector<int>dp(weight+1,0) ,cur(weight+1,0);
    dp[0] = cur[0] = 1 ;
     
    if(v[0]<=weight) dp[v[0]] = 1 ;

    for(int i=1;i<n;i++){
        for(int j=1;j<=weight;j++){
            int nottake = dp[j] ;
            int take =0 ;
            if(v[i]<=j)
            take = price[i]+dp[j-v[i]] ;
            cur[j] = max(take , nottake) ;
        }
        dp = cur ;
    } 
    return dp[weight] ;
}

// more optimized way

int max_profit4(vector<int>&v,vector<int>&price,int n,int weight){

    vector<int>dp(weight+1,0) ;
    dp[0] = 0 ;
    
    for(int i=0;i<n;i++){
        for(int cur = weight-v[i];cur>=0;cur--){
            dp[cur+v[i]] = max(dp[cur+v[i]] ,price[i]+ dp[cur]) ;
        }
    }
    return dp[weight] ;
}

int main(){
    int n,weight ;
    cin>>n>>weight ;
    vector<int>v(n),price(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    for(int i=0;i<n;i++) cin>>price[i] ;

    vector<vector<int>>dp(n+1,vector<int>(weight+1,-1)) ;

    cout<<max_profit(v,price,n-1,weight,dp)<<endl ;
    cout<<max_profit2(v,price,n,weight)<<endl ;
    cout<<max_profit3(v,price,n,weight)<<endl ;
    cout<<max_profit4(v,price,n,weight)<<endl ;

}

