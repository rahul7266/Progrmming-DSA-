#include<bits/stdc++.h>
using namespace std ;

// recursive
int lcs1(string s1, string s2, int m, int n){
     if(m<0 || n<0) return 0 ;
     if(s1[m]==s2[n]) return 1+lcs1(s1,s2,m-1,n-1) ;
     return max(lcs1(s1,s2,m-1,n), lcs1(s1,s2,m,n-1)) ;
}

// tabulation

int lcs2(string s1, string s2, int m ,int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1,0)) ; // for intializing first row and first column to zero
    for(int i=1;i<m+1;i++)
    for(int j=1;j<n+1;j++){
        if(s1[i-1]==s2[j-1]) dp[i][j] = 1+dp[i-1][j-1] ;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
    }
    return dp[m][n] ;
}

// space optimization

int lcs3(string s1, string s2, int m ,int n){
    vector<int>dp(m+1,0) ; //  intializing first  row to zero
    for(int i=1;i<m+1;i++){
        vector<int>temp(n+1,0) ; // intializing first  column to zero
        for(int j=1;j<n+1;j++){
           if(s1[i-1]==s2[j-1]) temp[j] = 1+dp[j-1] ;
           else temp[j] = max(dp[j], temp[j-1]) ;
        }
        dp = temp ;
    }
    
    return dp[m] ;
}

int main(){
    int m,n ;
    cin>>m>>n ;
    string s1,s2 ;
    cin>>s1>>s2 ;
    cout<<lcs1(s1,s2,m-1,n-1) ;
    cout<<lcs2(s1,s2,m,n) ;
    cout<<lcs3(s1,s2,m,n) ;


    return 0 ;
}