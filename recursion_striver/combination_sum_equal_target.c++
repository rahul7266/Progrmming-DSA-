#include<bits/stdc++.h>
using namespace std ;
void combination_sum(vector<int>v, vector<int>temp, int i, int target,int sum){
    if(i>=v.size()){
        if(target == sum){
            for(auto x:temp) cout<<x<<" " ;
             cout<<endl ;
        }
        return ;
    }

    if(sum+v[i]>target)  combination_sum(v,temp,i+1,target,sum) ;
    else{
        temp.push_back(v[i]) ;    // take
        combination_sum(v, temp, i,target, sum+v[i]) ;

        temp.pop_back() ;  // not take
        combination_sum(v, temp, i+1,target, sum) ; 
    }
       

}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
   int n ,target;
    cin>>n>>target ;
  vector<int> temp ;
   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
    
    combination_sum(v,temp, 0, target,0) ;
    return 0 ;
}