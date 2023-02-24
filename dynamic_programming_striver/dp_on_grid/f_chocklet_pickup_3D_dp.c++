#include<bits/stdc++.h>
using namespace std ;

// memoization
int dp[201][201][201] ;
int fun(vector<vector<int>>&v,int i ,int j1,int j2){   // here we are taking three variable ,here j1 and j2 for changing in same row
   if(j1<0||j1>=v[0].size()||j2<0||j2>=v[0].size()) return -1e9 ;
   if(i==v.size()-1){
    if(j1==j2) return v[i][j1] ;
    else return v[i][j1] + v[i][j2] ;
   }
  
  if(dp[i][j1][j2]!=-1) return dp[i][j1][j2] ;

   int mx = -1e9 ;
  for( int di = -1;di<=1;di++)
  for( int dj = -1;dj<=1;dj++)
  if(j1==j2) mx = max(mx, v[i][j1]+fun(v,i+1,j1+di,j2+dj)) ;
  else mx = max(mx, v[i][j1]+v[i][j2]+fun(v,i+1,j1+di,j2+dj)) ;
  
   return dp[i][j1][j2] = mx ;
    
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
  for(int j=0;j<n;j++)
  cin>>v[i][j];


memset(dp,-1,sizeof(dp));

cout<<fun(v,0,0,n-1)<<endl ;

// cout<<fun2(v)<<endl ;

// cout<<fun3(v)<<endl ;


    return 0 ;
 }