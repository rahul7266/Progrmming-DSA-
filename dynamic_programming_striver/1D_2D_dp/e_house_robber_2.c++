#include<bits/stdc++.h>
using namespace std ;

  int rob2(vector<int>& v) {
       int n=v.size() ;
  
     int prev2=0;
     int prev = v[0] ;
     
    int pick=0,not_pick=0,cur ;
    
     for(int i=1;i<v.size();i++){
       
        pick = v[i]+prev2;
        
        not_pick = prev;
        cur = max(pick,not_pick) ;

        prev2 = prev ;
        prev = cur ;


     }

     return cur;
    }
    int rob(vector<int>& nums) {
        vector<int>v1=nums;
        vector<int>v2=nums;


        // last and first can't come together
        v1.pop_back();
        v2.erase(v2.begin());
        return max(rob2(v1),rob2(v2));
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
    cout<<rob(v) ;

    
   
    return 0 ;
}