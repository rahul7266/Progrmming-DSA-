#include<bits/stdc++.h>
using namespace std ;

void fun(vector<int>&v,vector<int>&temp,int i ){
   if(i>=v.size()){
       for(auto x:temp)
       cout<<x<<" ";
       cout<<endl ;
       return ;
   }

   temp.push_back(v[i]) ;
   fun(v,temp,i+1) ;

   temp.pop_back() ;
   fun(v,temp,i+1) ;

}

int main(){
   int n ;
   cin>>n ;
   vector<int>v(n) ;
   for(int i=0;i<n;i++) cin>>v[i] ;
   vector<int>temp ;
   fun(v,temp,0) ;
   return 0 ;
}