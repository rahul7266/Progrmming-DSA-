#include<bits/stdc++.h>
using namespace std ;

       
vector<vector<int>>res ;
void subset(vector<int>&v,vector<int>&temp,int indx){
       res.push_back(temp) ;

       for(int i=indx;i<v.size();i++){
             
           if(i!=indx&&v[i]==v[i-1]) continue; // for same number again

           temp.push_back(v[i]) ;
           subset(v,temp,i+1) ;
           temp.pop_back() ;
       }

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