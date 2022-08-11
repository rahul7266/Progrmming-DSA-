#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n;
   vector<int>v(n) ;
   for(int i=0;i<n;i++) cin>>v[i] ;
   vector<pair<int,int>> p;
   for(int i=0;i<n;i++){
    p.push_back({v[i],i+1}) ;
   }
   sort(p.begin(),p.end()) ;
   for(auto x:p)
   cout<<x.second<<" ";

    return 0;
}