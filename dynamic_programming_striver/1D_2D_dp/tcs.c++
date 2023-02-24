#include<bits/stdc++.h>
using namespace std ;

int dp[100001];
int jump(vector<int>&v,int indx){
    if(indx>=v.size()-1) ;
    return 0 ;
//  if(dp[indx]!=-1) return dp[indx] ;
   int mn = INT_MAX ;
   for(int i=indx+1;i<v.size();i++){
   int temp=((i-indx+1)*v[indx]-v[i]);

   int x=temp+jump(v,i);
   mn = min(mn,x) ;
}
   return dp[indx]=mn ;
}


int main(){
//   freopen("input.txt","r",stdin) ;
//   freopen("output.txt","w",stdout) ;
    int n ;
    cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++)cin>>v[i] ;
    memset(dp,-1,sizeof(dp)) ;
    cout<<jump(v,0) ;
   
    return 0 ;
}