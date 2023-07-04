#include<bits/stdc++.h>
using namespace std ;
bool subset_sum(vector<int>&v, int n, int target){
    if(target==0) return true ;                                    
    if(n==0) return v[0] == target ;                                 
                                                            
    bool not_take = subset_sum(v,n-1,target) ;                    
    bool take = false ;                                                       
    if(v[n]<= target) take = subset_sum(v,n-1,target - v[n]);       
     return take || not_take ;                                           
}                                                                               

// tabulation dp
bool subset_sum2(vector<int>&v,int n, int target){

   vector<vector<bool>>dp(n,vector<bool>(target+1,0)) ;
     dp[0][v[0]] = true ;
      for(int i=0;i<n;i++) dp[i][0] = true ;

    for(int i=1;i<n;i++){
        for(int j=1;j<=target;j++){
    
            bool nottake = dp[i-1][j] ;
            bool take = false ;
            if(v[i]<=j)
            take = dp[i-1][j-v[i]] ;   

            dp[i][j] = take|nottake ;
            
        }
    }
    return dp[n-1][target] ;
}

// space optimization

bool subset_sum3(vector<int>&v,int n, int target){

    vector<bool>dp(target=1,0), cur(target+1,0) ;
     dp[0] = true ;
     cur[0] = true ;
     dp[v[0]] = true ;
    for(int i=1;i<n;i++){
        for(int j=1;j<=target;j++){
                 bool nottake = dp[j] ;
                 bool take = false ;
                 if(v[i]<=j)
                 take = dp[j-v[i]] ;   
                 cur[j] = take|nottake ;
           
        }
        dp=cur ;
    }
    return dp[target] ;
}

//more optimized and best way 

bool subset_sum4(vector<int>&v,int n, int target){

   vector<bool>dp(target+1,false) ;
   dp[0] = true ;    // base case 
   for(auto x:v){
    for(int cur = target-x;cur>=0;cur--){       // if infinite nahi diya ho to always piche se chalege varna ye loop aage se cahlega
        dp[cur+x] = dp[cur+x] | dp[cur] ;
    }
   }
   return dp[target] ;
}

int main(){
   

   int n,target;
   cin>>n>>target;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i] ;

     cout<<subset_sum2(v,n,target)<<endl ;
     cout<<subset_sum3(v,n,target)<<endl ;

     cout<<subset_sum4(v,n,target)<<endl ;

    return 0 ;
}