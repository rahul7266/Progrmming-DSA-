//Novice approch
// time and space complexity o(n)
#include<bits/stdc++.h>
using namespace std ;
vector<int>ar[10001] ;
int par[10001] ;
int vis[10001] ;
int level[10001] ;
void dfs(int v,int p,int l)
{
    vis[v]=1 ;
    par[v]=p ;
    level[v]=l ;
    for(auto child:ar[v])
         if(!vis[child])
         dfs(child,v,level[v]+1) ;
           
}
int lca(int a,int b)
{
    if(level[b]<level[a]) swap(a,b) ;
    int d=level[b]-level[a] ;
    while(d>0)
    {
        b=par[b] ;
        d-- ;
    }
    if(a==b) return a;
    while(a!=b)
    {
        a=par[a] ;
        b=par[b];
    }
    return a;
}


int main()
{
    int m,n;
    cin>>m>>n ;
    while(m--)
    {
        int a,b; 
        cin>>a>>b ;
        ar[a].push_back(b) ;
        ar[b].push_back(a) ;
    }
      int x,y ;
      cin>>x>>y ;
      dfs(1,0,0) ;
      cout<< lca(x,y) ;
      return 0 ;
}