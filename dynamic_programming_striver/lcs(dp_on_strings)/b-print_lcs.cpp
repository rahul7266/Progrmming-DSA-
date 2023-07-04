#include<bits/stdc++.h>
using namespace std ;

// tabulation

string printLcs(string s1, string s2, int m ,int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1,0)) ; // for intializing first row and first column to zero
    for(int i=1;i<m+1;i++)
    for(int j=1;j<n+1;j++){
        if(s1[i-1]==s2[j-1]) dp[i][j] = 1+dp[i-1][j-1] ;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
    }
    string ans ;
    while(m>0 && n>0){
        if(s1[m-1]==s2[n-1]){
            ans+=s1[m-1] ;
            m-- ;
            n-- ;
        }
        else if(dp[m][n-1]>dp[m-1][n])
             n--;
        else
            m-- ;
    }
    reverse(ans.begin(),ans.end()) ;
    return ans ;
}

int main(){
    int m,n ;
    cin>>m>>n ;
    string s1,s2 ;
    cin>>s1>>s2 ;
   
    cout<<printLcs(s1,s2,m,n) ;
   


    return 0 ;
}