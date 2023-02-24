#include<bits/stdc++.h>
using namespace std ;
void print_subsequence(vector<int>&v, vector<int>temp, int i){
    if(i>=v.size()){
        for(auto x:temp) cout<<x<<" " ;
        cout<<endl ;
        return ;
    }

    temp.push_back(v[i]) ; //take
    print_subsequence(v,temp,i+1) ; 
    temp.pop_back() ; //not take
    print_subsequence(v,temp,i+1) ;
}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
   int n ;
    cin>>n ;
   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
     vector<int>temp ;
     print_subsequence(v,temp,0) ;
    return 0 ;
}