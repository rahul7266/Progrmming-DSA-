#include<bits/stdc++.h>
using namespace std ;

       
vector<vector<int>>res ;
void subset(vector<int>&v,vector<int>&temp,int indx){
    if(indx>=v.size()){
        res.push_back(temp) ;
        return ;
    }

    //pick
    temp.push_back(v[indx]) ;
    subset(v,temp,indx+1) ;

    //not pick
    temp.pop_back();
    subset(v,temp,indx+1) ;

}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
   int n ;
    cin>>n;
  vector<int> temp ;
   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
   subset(v,temp,0) ;

   for(auto x:res){
    for(auto y:x){
        cout<<y<<" " ;
    }
    cout<<endl ;
   }
    return 0 ;
}