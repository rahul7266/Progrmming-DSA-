#include<bits/stdc++.h>
using namespace std ;

// int maxsum(vector<int>&v,int indx){
//     if(indx>v.size()-1) return 0 ;


//     //pick
//     int pick = v[indx]+maxsum(v,indx+2) ;
     
//     //not pick
//     int not_pick = maxsum(v,indx+1) ;

//     return max(pick,not_pick) ;
// }

//memoization

//  int dp[101] ;
//     int maxsum(vector<int>&v,int indx){
//     if(indx>v.size()-1) return 0 ;

//      if(dp[indx]!=-1) return dp[indx] ;
//     //pick
//     int pick = v[indx]+maxsum(v,indx+2) ;
     
//     //not pick
//     int not_pick = maxsum(v,indx+1) ;

//     return dp[indx]=max(pick,not_pick) ;
//    }


// another recursive way

int maxsum2(vector<int>&v,int indx){
    if(indx == 0) return v[indx] ;
    if(indx<0) return 0;

    //pick
    int pick = v[indx] +maxsum2(v,indx-2);

    //not pick
    int not_pick = maxsum2(v,indx-1) ;

    return max(pick,not_pick) ;
}

//tabulation dp

int maxsum3(vector<int>&v){
     int n=v.size() ;
   vector<int>dp(n) ;
      dp[0]=v[0] ;
     
    int pick=0,not_pick=0 ;
    
     for(int i=1;i<v.size();i++){
       
        pick = v[i];
        if(i>1) pick+=dp[i-2] ;
        not_pick = dp[i-1] ;
        dp[i] = max(pick,not_pick) ;
     }

     return dp[n-1] ;
}

// space optimized
int maxsum4(vector<int>&v){
     int n=v.size() ;
  
     int prev2=0;
     int prev = v[0] ;
     
    int pick=0,not_pick=0,cur ;
    
     for(int i=1;i<v.size();i++){
       
        pick = v[i]+prev2;
        // if(i>1) pick+=prev2 ;
        not_pick = prev;
        cur = max(pick,not_pick) ;

        prev2 = prev ;
        prev = cur ;


     }

     return cur;
}


int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
    int n ;
    cin>>n ;
    vector<int> v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    // memset(dp,-1,sizeof(dp)) ;
    // cout<<maxsum(v,0) ;

    // cout<<maxsum2(v,n-1) ;
    // cout<<maxsum3(v) ;
    cout<<maxsum4(v) ;

    
   
    return 0 ;
}