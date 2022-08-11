#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int dp[2501][2501] ;
    int fun(vector<int>&nums,int cur,int prev, int n){
        if(cur == n) return 0 ;
        if(dp[cur][prev+1]!=-1)return dp[cur][prev+1] ;
        
        int l;
          l = fun(nums,cur+1,prev,n) ;   // not taking
        if(prev==-1||nums[prev]<nums[cur])
          l =max(l,1+ fun(nums,cur+1,cur,n) ) ;   //  taking element from array
        
        return dp[cur][prev+1] = l;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp)) ;
        return fun(nums,0,-1,nums.size()) ;
    }
};

int main(){
 Solution obj ;
 int n; 
 cin>>n ;
 vector<int>v(n) ;
 for(int i=0;i<n;i++) cin>>v[i] ;
cout<<obj.lengthOfLIS(v)<<endl ; 
    return 0 ;
}