#include<bits/stdc++.h>
using namespace std ;

// memoization
int pathSum(vector<vector<int>>&v,int i,int j,vector<vector<int>>&dp){
    if(j<0 || j>= v[0].size()) return INT_MAX ;

    if(i==0) return v[i][j] ;

    if(dp[i][j]!=INT_MAX) return dp[i][j] ;

    int left = pathSum(v,i-1,j-1,dp) ;
    int up = pathSum(v,i-1,j,dp) ;
    int right = pathSum(v,i-1,j+1,dp) ;

    return dp[i][j] = v[i][j] + min({left,up,right}) ; 
}

int fun(vector<vector<int>>&v,int m ,int n){
    int mn = INT_MAX ;

    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    for(int i=0;i<n;i++)
    mn = min(mn,pathSum(v,i,m-1,dp)) ;
    return mn ;
}


// tabulation dp

int fun2(vector<vector<int>>&v){
     int m = v.size() ;
    int n = v[0].size() ;

   vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
     
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0) dp[i][j] = v[i][j] ;
            else{
                int l=INT_MAX ,u = INT_MAX ,r = INT_MAX ;
                if(j>0) l = dp[i-1][j-1] ;
                u = dp[i-1][j] ;
                if(j<n-1) r = dp[i-1][j+1] ;

                dp[i][j] = v[i][j] + min({l,u,r}) ;
            }
        }

    }

    int mn = INT_MAX ;
    for(auto x:dp[m-1])
    mn = min(mn,x) ;

    return mn ;
    
}

// space optimization

int fun3(vector<vector<int>>&v){
     int m = v.size() ;
    int n = v[0].size() ;

   vector<int> dp(n, INT_MAX);
     
    for(int i=0;i<m;i++){
   vector<int> cur(n, INT_MAX);
        for(int j=0;j<n;j++){
            if(i==0) cur[j] = v[i][j] ;
            else{
                int l=INT_MAX ,u = INT_MAX ,r = INT_MAX ;
                if(j>0) l = dp[j-1] ;
                u = dp[j] ;
                if(j<n-1) r = dp[j+1] ;

                cur[j] = v[i][j] + min({l,u,r}) ;
            }
        }
        dp=cur ;

    }

    int mn = INT_MAX ;
    for(auto x:dp)
    mn = min(mn,x) ;

    return mn ;
    
}


int main(){
    freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int m,n;
  cin>>m>>n;
  vector<vector<int>>v(m,vector<int>(n,0));
  for(int i=0;i<m;i++)
  for(int j=0;j<=n;j++)
  cin>>v[i][j];




cout<<fun(v,m,n)<<endl ;

cout<<fun2(v)<<endl ;

cout<<fun3(v)<<endl ;


    return 0 ;
 }