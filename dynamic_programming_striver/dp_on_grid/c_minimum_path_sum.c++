#include<bits/stdc++.h>
using namespace std ;


int dp[201][201] ;
    int fun(int m,int n,vector<vector<int>>&grid){
        if(m==0 && n==0) return grid[0][0] ;
     
        if(m<0||n<0) return INT_MAX ;
         if(dp[m][n]!=-1) return dp[m][n] ;
        return dp[m][n] = grid[m][n] + min(fun(m,n-1,grid),fun(m-1,n,grid)) ;
    }

// tabulation dp

int fun2(vector<vector<int>>& grid,int m,int n ){
    int dp[m][n] ;
     
     for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     if(i==0&&j==0) dp[i][j] = grid[i][j] ;
     else{
        int l = INT_MAX ;
        int u = INT_MAX ;
        if(j>0) l = dp[i][j-1] ;
        if(i>0) u = dp[i-1][j] ;
        dp[i][j] = grid[i][j]+min(l,u) ;
     }

    return dp[m-1][n-1] ;
}

// optimized

int fun3(vector<vector<int>>& grid,int m,int n ){
     vector<int>dp(n,0) ;
     
     for(int i=0;i<m;i++){
         vector<int>cur(n,0) ;
       for(int j=0;j<n;j++){
           if(i==0&&j==0) cur[j] = grid[i][j] ;
           else{
           int l = INT_MAX ;
           int u = INT_MAX ;
           if(j>0) l = cur[j-1] ;
           if(i>0) u = dp[j] ;
            cur[j] = grid[i][j]+min(l,u) ;
           }
       }
       dp = cur ;
     }
    return dp[n-1] ;
}
 
 int main(){
    freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n,m;
  cin>>m>>n;
  vector<vector<int>>v(m,vector<int>(n,0));
  for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
  cin>>v[i][j];
memset(dp,-1,sizeof(dp));

cout<<fun(m-1,n-1,v)<<endl ;
cout<<fun2(v,m,n)<<endl ;
cout<<fun3(v,m,n)<<endl ;

    return 0 ;
 }