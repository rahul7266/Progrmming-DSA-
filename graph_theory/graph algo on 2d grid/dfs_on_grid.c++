#include<bits/stdc++.h>
using namespace std;
int m,n ;
int vis[10001][10001] ;
bool isValid(int x,int y )
{
    if(x<1||x>m||y<1||y>n) return false ;
    if(vis[x][y]) return false ;
    return true ;
}
void dfs(int x,int y)
{
    vis[x][y]=1 ;
    cout<<x<<" "<<y<<endl ;
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
    dfs(1,1) ;
    return 0;
}