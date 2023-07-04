#include<bits/stdc++.h>
using namespace std ;

// recusrsive

int distinct_sequence(string s1, string s2, int i ,int j){
    if(j<0) return 1; // means all the character of string s2 matches with string s1
    if(i<0) return 0 ; 

    if(s1[i] == s2[j]) return distinct_sequence(s1,s2,i-1,j-1) + distinct_sequence(s1,s2,i-1,j) ; // if ith and jth char matches then (i-1,j-1) in both string s1 and string s2 + although matching but not considering the ith character of string s1

    return  distinct_sequence(s1,s2,i-1,j) ;
     
}

// tabulation 
// in tabulation we will shift the one index to right means index+1 for cobvering the base case
int distinct_sequence2(string s1,string s2,int m, int n){

        vector<vector<double>>dp(m+1,vector<double>(n+1,0)) ;
  // base case
   for(int i=0;i<n;i++)
  dp[0][i] = 0 ;
  for(int i=0;i<m;i++)
   dp[i][0] = 1 ;

  // main method

  for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        if(s1[i-1] == s2[j-1])
        dp[i][j] = dp[i-1][j-1] + dp[i-1][j] ;
        else
        dp[i][j] = dp[i-1][j] ;
    }
  }
   return (int)dp[m][n] ;
}

int main(){
    int m,n ;
    cin>>m>>n ;
    string s1,s2 ;
    cin>>s1>>s2 ;
   
    cout<<distinct_sequence(s1,s2,m-1,n-1) ;
    cout<<distinct_sequence2(s1,s2,m,n) ;

   


    return 0 ;
}