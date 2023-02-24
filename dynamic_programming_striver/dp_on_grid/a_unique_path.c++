#include<bits/stdc++.h>
using namespace std ;
int dp[1001][1001] ;
int unique_path(int m,int n){
     if(m==0||n==0)
    return 1;
    if(dp[m][n]!=-1)
    return dp[m][n];
    return unique_path(m-1,n)+unique_path(m,n-1) ;
}

// tabulation dp

int unique_path2(int m,int n){
    int dp[m][n] ;

    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(i==0 || j==0) dp[i][j] = 1 ;
    else dp[i][j] = dp[i-1][j] + dp[i][j-1] ;

    return dp[m-1][n-1] ;
}

// space optimized

int unique_path3(int m,int n){
   vector<int> dp(n,1) ;

   for(int j=1;j<m;j++){
    vector<int> temp(n,1) ;
    for(int i=1;i<n;i++)
    temp[i] = temp[i-1]+dp[i] ;

    dp = temp ;
   }

   return  dp[n-1] ;  
}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int m,n ;
    cin>>m>>n ;
    memset(dp,-1,sizeof(dp));
   cout<<unique_path(m-1,n-1)<<endl ;
    cout<<unique_path2(m,n)<<endl ;
    cout<<unique_path3(m,n)<<endl ;

    

    
    return 0 ;
}