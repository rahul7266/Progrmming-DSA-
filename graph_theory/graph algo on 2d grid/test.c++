#include<bits/stdc++.h>
using namespace std ;
  int N,M ;
vector<int>temp ;
vector<vector<int>>res ;
  bool isValid(int x,int y )
{
    if(x<1||x>N||y<1||y>M) return false ;
  
    return true ;
}

void dfs(vector<vector<int>> &mat,int x,int y)
{
    if(x==N-1 && y==M-1){
        res.push_back(temp) ;
        return ;
    }
    temp.push_back(mat[x][y]) ;
    if(isValid(x,y-1))
    dfs(mat,x,y-1) ;
    if(isValid(x,y+1))
    dfs(mat,x,y+1) ;
    if(isValid(x-1,y))
    dfs(mat,x-1,y) ;
    if(isValid(x+1,y))
    dfs(mat,x+1,y) ;
    
    temp.pop_back() ;
}

    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        N=n;
        M=m ;
        
        dfs(mat,0,0) ;
        vector<vector<int>>v ;
        for(auto x:res){
            // for(auto p:x)
            // cout<<p<<" ";
            // cout<<endl ;
            
            int c =0 ;
            for(auto y:x)
            if(y==1)c++ ;
            v.push_back({x.size(),c}) ;
        }
        int ans = INT_MAX ;
        for(auto x:v)
        if(x[1]<=k)
        ans = min(ans,x[0]) ;
        if(ans==INT_MAX) return -1 ;
        return ans ;
    }

    int main(){
        int n,m,k ;
        cin>>n>>m>>k ;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>v[i][j] ;
        cout<<shotestPath(v,n,m,k) ;
      return 0 ;
    }