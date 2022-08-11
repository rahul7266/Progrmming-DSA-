#include<bits/stdc++.h>
using namespace std;
int m,n ;
int dis[10001][10001] ;
int vis[10001][10001] ;
bool isValid(int x,int y)
{
    if( x<1 || y<1 || x>m || y>n) return false ;
    if(vis[x][y]==1) return false ;
    return true ;
}
int dx[]={-1, 0, 1, 0} ;
int dy[] = {0, 1, 0, -1} ;
void bfs(int x ,int y)
{
    queue<pair<int ,int >>q ;
    q.push({x,y}) ;
    vis[x][y] =1 ;
    dis[x][y] = 0 ;
    while(!q.empty())
    {
       int curx = q.front().first ;
       int cury = q.front().second ;
        q.pop() ;
        for(int i=0 ;i<4 ;i++)
        {
            int newx = curx+dx[i] ;
            int newy = cury+dy[i] ;
            if(isValid(newx,newy)){
                q.push({newx,newy}) ;
                vis[newx][newy] = 1;
                dis[newx][newy] = dis[curx][cury] + 1;
            }
        }
    }
}
int main(){
    cin>>m>>n ;
    int x,y ;
    cin>>x>>y ;
     bfs(x,y) ;
     for( int i=1 ;i<=m; i++){
        for( int j=1 ;j<=n ; j++)
        {
              cout<<dis[i][j]<<" ";
        }
       cout<<endl;
     }
    
     return 0 ;
}