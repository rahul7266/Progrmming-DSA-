#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int grid(int m,int n ){
    if(m==0||n==0)
    return 1;
    if(dp[m][n]!=-1)
    return dp[m][n];
    return dp[m][n]=grid(m,n-1)+grid(m-1,n);
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>>v(m,vector<int>(n,0));
//   for(int i=0;i<m;i++)
//   for(int j=0;j<n;j++)
//   cin>>v[i][j];
memset(dp,-1,sizeof(dp));
  cout<<grid(m-1,n-1);
    return 0;
}