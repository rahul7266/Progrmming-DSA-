#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int substring(string x,string y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
            dp[i][j]=0;
        }
    }
    int maxn=0;
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
            maxn=max(maxn,dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }
    return maxn;
}
int main(){
    int m,n;
    cin>>m>>n;
    string x,y;
    cin>>x>>y;
    cout<<substring(x,y,m,n);
    return 0;
}