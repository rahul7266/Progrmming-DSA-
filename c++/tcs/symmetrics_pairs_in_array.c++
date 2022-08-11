#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(2)) ;
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1] ;
    }
    unordered_map<int,int>mp ;
    for(auto x:v){
        if(mp.find(x[1])!=mp.end()&&mp[x[1]]==x[0])
          cout<<"("<<x[0]<<", "<<x[1]<<")"<<endl ;
          else
          mp[x[0]]=x[1] ;
    }

    return 0;
}