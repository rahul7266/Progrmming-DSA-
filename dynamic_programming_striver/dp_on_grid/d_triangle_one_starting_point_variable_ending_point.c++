#include<bits/stdc++.h>
using namespace std ;


 int dp[201][201] ;
    int fun(vector<vector<int>>&v,int i ,int j){
        if(i==v.size()-1) return v[i][j] ;
       
          if(dp[i][j]!=-1) return dp[i][j] ;
        return dp[i][j] = v[i][j] + min(fun(v,i+1,j),fun(v,i+1,j+1)) ;
    }

// tabulation dp
int fun2(vector<vector<int>>&v){
    int n = v.size() ;
        vector<vector<int>>dp(n,vector<int>(n,0)) ;
        for(int i=n-1;i>=0;i--){
            for(int j = i;j>=0;j--){
                if(i == n-1) dp[i][j] = v[i][j] ;
                else{
                    dp[i][j] = v[i][j]+min(dp[i+1][j],dp[i+1][j+1]) ;
                }
            }
        }

        return dp[0][0] ;
}
 
 // space optimized

int fun3(vector<vector<int>>&v){
    int n = v.size() ;
        vector<int>dp(n,0) ;
        for(int i=n-1;i>=0;i--){
          vector<int>cur(n,0) ;
            for(int j = i;j>=0;j--){
                if(i == n-1) cur[j] = v[i][j] ;
                else{
                    cur[j] = v[i][j]+min(dp[j],dp[j+1]) ;
                }
            }
            dp = cur ;
        }

        return dp[0] ;
}

int main(){
    freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n;
  cin>>n;
  vector<vector<int>>v(n,vector<int>(n,0));
  for(int i=0;i<n;i++)
  for(int j=0;j<=i;j++)
  cin>>v[i][j];


memset(dp,-1,sizeof(dp));

cout<<fun(v,0,0)<<endl ;

cout<<fun2(v)<<endl ;

cout<<fun3(v)<<endl ;


    return 0 ;
 }