#include<bits/stdc++.h>
using namespace std ;
int dp[1001][1001] ;
int unique_path(int m,int n,vector<vector<int>>&v){
    if(m>=0&&n>=0&&v[m][n]==-1) return 0 ;
     if(m==0&&n==0) return 1;
    if(m<0||n<0) return 0 ;
    if(dp[m][n]!=-1)
    return dp[m][n];
    return dp[m][n] = unique_path(m-1,n,v)+unique_path(m,n-1,v) ;
}

// tabulation dp

int unique_path2(int m,int n,vector<vector<int>>&v){
    int dp[m][n] ;

    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(v[i][j]==-1) dp[i][j]=0 ;
    else if(i==0 && j==0) dp[i][j] = 1 ;
    else {
        int up = 0 ;
        int left = 0 ;
        if(i>0) up = dp[i-1][j] ;
        if(j>0) left = dp[i][j-1] ;
        dp[i][j] = up+left ;
    }

    return dp[m-1][n-1] ;
}

// space optimized

int unique_path3(int m,int n,vector<vector<int>>& v) {
     
     vector<int>dp(n,0) ;

    for(int i=0;i<m;i++)
    {
        vector<int>cur(n,0) ;
       for(int j=0;j<n;j++){
         if(v[i][j]== 1) cur[j]=0 ;
         else if(i==0 && j==0) cur[j] = 1 ;
         else {
             int up = 0 ;
             int left = 0 ;
             if(i>0) up =  dp[j];
             if(j>0) left = cur[j-1] ;
             cur[j] = up+left ;
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
 
   cout<<unique_path(m-1,n-1,v)<<endl ;
    cout<<unique_path2(m,n,v)<<endl ;
    cout<<unique_path3(m,n,v)<<endl ;

    

    
    return 0 ;
}