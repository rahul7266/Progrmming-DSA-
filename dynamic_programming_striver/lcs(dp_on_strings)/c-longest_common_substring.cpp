#include<bits/stdc++.h>
using namespace std ;

// tabulation

int substring(string s1, string s2, int m ,int n){
   vector<vector<int>>dp(m+1,vector<int>(n+1,0)) ; // for intializing first row and first column to zero for handling base case
     int mx = 0 ;
    for(int i=1;i<m+1;i++)
    for(int j=1;j<n+1;j++){
        if(s1[i-1]==s2[j-1]) {
            dp[i][j] = 1+dp[i-1][j-1] ;
            // longest substring length = max value in whole matrix
             mx = max(mx,dp[i][j]) ;

        }
        else dp[i][j] = 0 ; // here if not matches then we will take it zero because substring will be the continiuous character of original string
    }

    return mx ;

}

int main(){
    int m,n ;
    cin>>m>>n ;
    string s1,s2 ;
    cin>>s1>>s2 ;
   
    cout<<substring(s1,s2,m,n) ;
   


    return 0 ;
}