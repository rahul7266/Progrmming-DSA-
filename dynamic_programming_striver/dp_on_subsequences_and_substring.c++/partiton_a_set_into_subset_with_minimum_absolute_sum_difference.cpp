#include<bits/stdc++.h>
using namespace std ;


//here last line of dp giving us the possilities of sum from 0 to target(here target = sum)
//we have to find out minimum |s1-s2| 
//we can write s2 as  s2 = sum - s1 
// means we have to find out minimum |2 * s1 - sum |
// for finding this we have to apply different-different value of s1

// tabulation dp
int subset_sum2(vector<int>&v,int n, int sum){
             int  target = sum/2 ; //  element will be repeated after mid by taking difference with sum
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
 for(int i=target;i>=0;i--){
       if(dp[n-1][i]) 
         return  abs(2*i-sum);
    }
   
    return -1; //nothing 
}

// space optimization

int subset_sum3(vector<int>&v,int n, int sum){
        int   target = sum/2 ;
    vector<bool>dp(target+1,0), cur(target+1,0) ;
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

    
    for(int i=target;i>=0;i--){
       if(dp[i]) 
         return   abs(2*i-sum);
    }
   
    return -1; //nothing 
}

//more optimized and best way 

int subset_sum4(vector<int>&v,int n, int sum){
      int target = sum/2 ;
   vector<bool>dp(target+1,false) ;
   dp[0] = true ;    // base case 
   for(auto x:v){
    for(int cur = target-x;cur>=0;cur--){       // if infinite n diya ho to always piche se chalege varna ye loop aage se cahlega
        dp[cur+x] = dp[cur+x] | dp[cur] ;
    }
   }

    for(int i=target;i>=0;i--){
       if(dp[i]) 
         return   abs(2*i-sum);
    }
   
    return -1; //nothing 

}

int main(){
   

   int n,target;
   cin>>n>>target;
   vector<int>v(n);
   int sum=0 ;
   for(int i=0;i<n;i++){ 
    cin>>v[i];
    sum+v[i] ;
    } 

     cout<<subset_sum2(v,n,sum)<<endl ;
     cout<<subset_sum3(v,n,sum)<<endl ;

     cout<<subset_sum4(v,n,sum)<<endl ;

    return 0 ;
}