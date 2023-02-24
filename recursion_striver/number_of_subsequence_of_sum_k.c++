#include<bits/stdc++.h>
using namespace std ;
int print_subsequence(vector<int>&v,  int i,int s,int k){
    if(i>=v.size()){
        if(s==k)
             return 1;
        else
          return 0 ;
        
    }

    //take
    s+=v[i] ;
   int l =  print_subsequence(v,i+1,s,k);

    s-=v[i] ;
   int r =  print_subsequence(v,i+1,s,k);//not take

    return l+r ;
}

int main(){
  freopen("input.txt","r",stdin) ;
  freopen("output.txt","w",stdout) ;
   int n ,k;
    cin>>n>>k ;

   vector<int>v(n) ;
     for(int i=0;i<n;i++)cin>>v[i] ;
    
     cout << print_subsequence(v, 0, 0, k) << endl  ;
    return 0 ;
}