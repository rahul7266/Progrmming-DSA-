#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int grid(vector<vector<int>>v,int m,int n ){
    bool flag=false;
    // in first column we have only down,right movement so if any obstacle found, we can not go down to that obstacle
    for(int i=0;i<m;i++){
         if(flag||v[i][0]==1){
             flag=true;
             dp[i][0]=0;
         }
         else dp[i][0]=1;
    }
      flag=false;
    for(int i=0;i<n;i++){
         if(flag||v[0][i]==1){
             flag=true;
             dp[0][i]=0;
         }
         else dp[0][i]=1;
    }
   for(int i=1;i<m;i++)
     for(int j=1;j<n;j++){
        if(v[i][j]==0){
          if(i==0||j==0)
          dp[i][j]= 1;
          else dp[i][j]=dp[i-1][j]+dp[i][j-1];
       }
       else dp[i][j]=0;
     }
    return dp[m-1][n-1];
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>>v(m,vector<int>(n,0));
  for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
  cin>>v[i][j];
memset(dp,-1,sizeof(dp));
  cout<<grid(v,m,n);
    return 0;
}