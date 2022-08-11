#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int dis[100001] ;
void dfs(int v,int d){
        vis[v]=1;
        dis[v]=d;
    for(int child:ar[v])
        if(!vis[child])
        dfs(child,dis[v]+1);   
}
int main() {
    int n,m,s;
    cin>>n>>m>>s;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
	      dfs(s,0);
         
    for(int i=1;i<=n;i++)
    cout<<dis[i]<<" ";
    
       
	return 0;
}