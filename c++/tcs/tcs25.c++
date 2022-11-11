#include<bits/stdc++.h>
using namespace std;
int m,n,c=0 ;
int vis[10001][10001] ;
int a[10001][10001] ;
bool isValid(int x,int y )
{
    if(x<1||x>m||y<1||y>n) return false ;
    if(vis[x][y]||!a[x][y]) return false ;
    return true ;
}
void dfs(int x,int y)
{
    vis[x][y]=1 ;
      c++ ;
    if(isValid(x,y-1))
    dfs(x,y-1) ;
    if(isValid(x,y+1))
    dfs(x,y+1) ;
    if(isValid(x-1,y))
    dfs(x-1,y) ;
    if(isValid(x+1,y))
    dfs(x+1,y) ;
}
int main()
{
    
    cin>>m>>n ;
    for(int i=1;i<=m;i++)
    for(int j=1; j<=n ;j++)
    cin>>a[i][j] ;
    vector<int>ans ;
   
    for(int i=1;i<=m;i++)
    for(int j=1; j<=n ;j++)
    if(!vis[i][j] && a[i][j])
    {dfs(i,j) ;
      ans.push_back(c) ;
      c=0 ;
    }
    sort(ans.begin(),ans.end(),greater<int>()) ;
    int suresh=0 ;
    for(int i=0;i<n;i++)
    if(i%2!=0)
    suresh+=ans[i] ;
    cout<<suresh;
    return 0;
}