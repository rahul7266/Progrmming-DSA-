#include<bits/stdc++.h>
using namespace std ;
void print_subsequence(vector<int>&v, vector<int>temp, int i,int s,int k){
    if(i>=v.size()){
        if(s==k)
          {
             for(auto x:temp) cout<<x<<" " ;
             cout<<endl ;
          }
        return ;
    }

    temp.push_back(v[i]) ; //take
    s+=v[i] ;
    print_subsequence(v,temp,i+1,s,k) ; 
    s-=temp[temp.size()-1] ; //  s-=v[i] ;
    temp.pop_back() ;  
    print_subsequence(v,temp,i+1,s,k) ;//not take
}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
   int n ,k;
    cin>>n>>k ;

   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
     vector<int>temp ;
     print_subsequence(v, temp, 0, 0,k) ;
    return 0 ;
}