#include<bits/stdc++.h>
using namespace std ;
vector<int> rev(vector<int>&v){
  if(v.size()==0||v.size()==1)
  return v ;
  int temp = v[0] ;
  v.erase(v.begin()) ;
  vector<int> t = rev(v) ;
  t.push_back(temp) ;
  return t  ;
}
int main(){
    int n ;
    cin>>n ;
   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
   v = rev(v) ;
   for(int i=0;i<n;i++)
   cout<<v[i]<<" " ;
    return 0 ;
}