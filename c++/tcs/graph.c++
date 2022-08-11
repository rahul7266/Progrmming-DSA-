#include<bits/stdc++.h>
using namespace std ;
vector<int>ar[100001] ;
int vis[100001] ;
void dfs(int v,vector<int>&dis,int d){
    vis[v]=1 ;
    dis[v] = d ;
    for(auto child:ar[v])
    if(!vis[child])
    dfs(child,dis,d+1) ;
}
int main()
{
    int n ;
    cin>>n ;
    vector<int>g_from={1,1,1,5} ;
    vector<int>to={3,5,2,4} ;
    vector<int>special={2,3,4} ;
    for(int i=0;i<g_from.size();i++){
          ar[g_from[i]].push_back(to[i]) ;
          ar[to[i]].push_back(g_from[i]) ;
    }
    vector<vector<int>>ans ;
    for(int i=1;i<=n;i++){
        vector<int>dis(n+1,0) ;
        for(int i=0;i<100001;i++){
            vis[i]=0 ;
        }
        dfs(i,dis,0) ;
       ans.push_back(dis) ;
    }
   
   long long sum=0 ;
   for(int i=1;i<=n;i++){
    for(auto x:special)
    sum +=ans[i-1][x] ;
   }
   cout<<sum<<endl ;
    return 0 ;
}