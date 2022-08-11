#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
string print_scs(string x,string y,int m,int n){
    for(int i=0;i<m+1;i++)
    for(int j=0;j<n+1;j++)
    if(i==0||j==0)
    dp[i][j]=0;
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int i=m,j=n;
    string s="";
    while(i>0&&j>0){
        if(x[i-1]==y[j-1]){
            s+=x[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            s+=x[i-1];
                 i--;
        }
        else {
            s+=y[j-1];
            j--;
        }
        
    }
    while(i>0){
            s+=x[i-1];
            i--;
        }
        while(j>0){
            s+=y[j-1];
            j--;
        }
   reverse(s.begin(),s.end());
  return s;
}
int main(){
   int m,n;
   string x,y;
   cin>>m>>n;
   cin>>x>>y;
   cout<<print_scs(x,y,m,n);
    return 0;
}