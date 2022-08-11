#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int min_del(string x,string y,int m,int n){
     for(int i=0;i<m+1;i++)
     for(int j=0;j<n+1;j++)
     if(i==0||j==0)
     dp[i][j]=0;

     for(int i=1;i<m+1;i++){
         for(int j=1;j<n+1;j++){
             if(x[i-1]==y[j-1])
             dp[i][j]=1+dp[i-1][j-1];
             else
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
         }
     }
     return m-dp[m][n];
}
int main(){
    int m;
    cin>>m;
    string s;
    cin>>s;
    string a=s;
    reverse(a.begin(),a.end());
    cout<<min_del(s,a,m,m);
    return 0;
}