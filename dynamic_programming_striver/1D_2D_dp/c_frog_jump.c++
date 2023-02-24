#include<bits/stdc++.h>
using namespace std ;

// int dp[100001];
// int jump(vector<int>&v,int indx){
//     if(indx==0)
//     return 0 ;
 
//     if(dp[indx]!=-1) return dp[indx] ;
//     int left = jump(v,indx-1)+abs(v[indx]-v[indx-1]) ;
//     int right = INT_MAX ;
//     if(indx>1)
//       right = jump(v,indx-2)+abs(v[indx]-v[indx-2]) ;

//     return dp[indx] = min(left,right) ;
// }

// int jump(vector<int>&v,int n){
//   int dp[n+1] ;
//   dp[0]=0 ;
//   int left,right = INT_MAX ;
//   for(int i=1;i<=n;i++){
//     left = dp[i-1]+abs(v[i]-v[i-1]) ;

//     if(i>1)
//     right = dp[i-2]+abs(v[i]-v[i-2]) ;

//     dp[i] = min(left,right) ;
//   }
//   return dp[n] ;
// }


// space optimized

int jump(vector<int> &v,int n)
{

  int left,right = INT_MAX ,prev=0,prev2=0,cur;
  for(int i=1;i<n;i++){
    left = prev+abs(v[i]-v[i-1]) ;

    if(i>1)
    right = prev2+abs(v[i]-v[i-2]) ;

    cur = min(left,right) ;
    prev2 = prev ;
    prev = cur ;

  }
  return prev ;
    
}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n ;
    cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++)cin>>v[i] ;
    // memset(dp,-1,sizeof(dp)) ;
    // cout<<jump(v,n-1) ;

    cout<<jump(v,n) ;
   
    return 0 ;
}