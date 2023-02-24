#include<bits/stdc++.h>
using namespace std ;
void combination_sum2(vector<int>v, vector<int>temp, int indx, int target,int sum){
    if(sum==target){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" " ;
        }
        cout<<endl ;
        return ;
    }

for(int i=indx;i<v.size();i++){

  if(i>indx &&v [i]==v[i-1]) continue ;
  
    if(sum+v[i]>target) break ;

   

    temp.push_back(v[i]) ;
    combination_sum2(v,temp,i+1,target,sum+v[i]) ;
    temp.pop_back() ;
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
    sort(v.begin(),v.end()) ;
    combination_sum2(v,temp, 0, target,0) ;
    return 0 ;
}