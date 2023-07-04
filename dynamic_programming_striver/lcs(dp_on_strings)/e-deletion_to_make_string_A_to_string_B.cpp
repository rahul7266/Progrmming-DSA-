#include<bits/stdc++.h>
using namespace std ;

// tabulation

int lcs(string s1, string s2, int m ,int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1,0)) ; // for intializing first row and first column to zero
    for(int i=1;i<m+1;i++)
    for(int j=1;j<n+1;j++){
        if(s1[i-1]==s2[j-1]) dp[i][j] = 1+dp[i-1][j-1] ;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
    }
     int ans = (m - dp[m][n]) + (n - dp[m][n]) ;
    return ans ;
}

int main(){
    int m,n ;
    cin>>m>>n ;
    string s1,s2 ;
    cin>>s1>>s2 ;
   
    cout<<lcs(s1,s2,m,n) ;
   


    return 0 ;
}